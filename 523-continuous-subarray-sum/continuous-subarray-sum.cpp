class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        // Stores: remainder -> first index where it appeared
        unordered_map<int, int> mp;

        // A remainder of 0 is considered to occur before the array starts
        mp[0] = -1;

        int prefix = 0;

        for (int i = 0; i < nums.size(); i++) {

            // Update running prefix sum
            prefix += nums[i];

            // Compute remainder
            int rem = prefix % k;

            // If this remainder has been seen before
            if (mp.count(rem)) {

                // Check if the subarray length is at least 2
                if (i - mp[rem] >= 2)
                    return true;
            }
            else {
                // Store only the first occurrence of this remainder
                mp[rem] = i;
            }
        }

        return false;
    }
};