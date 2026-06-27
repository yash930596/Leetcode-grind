class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;

        for (int x : nums)
            freq[x]++;

        int ans = 1;

        // Handle 1 separately
        if (freq.count(1)) {
            ans = max(ans, (freq[1] % 2) ? freq[1] : freq[1] - 1);
        }

        for (auto &[x, cnt] : freq) {
            if (x == 1) continue;

            long long cur = x;
            int len = 1;   // current number can always be the middle

            while (true) {
                if (cur > 1000000000LL / cur) break;

                long long nxt = cur * cur;

                // Need 2 copies of current and next must exist
                if (freq[cur] >= 2 && freq.count(nxt)) {
                    len += 2;
                    cur = nxt;
                } else {
                    break;
                }
            }

            ans = max(ans, len);
        }

        return ans;
    }
};