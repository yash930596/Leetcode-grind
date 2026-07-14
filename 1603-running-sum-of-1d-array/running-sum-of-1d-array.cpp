class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         
        vector<int>nums2;
        int sum=0;

          for(int i=0;i<nums.size();i++)
          {
                   sum=sum+nums[i];
                   nums2.push_back(sum);
          }

          return nums2;

    }
};