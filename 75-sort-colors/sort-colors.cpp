class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r=0,w=0,b=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            r++;
            if(nums[i]==1)
            w++;
            if(nums[i]==2)
            b++;
        }
        while(r>0)
        {
            ans.push_back(0);
            r--;
        }
        while(w>0)
        {
            ans.push_back(1);
            w--;
        }
        while(b>0)
        {
            ans.push_back(2);
            b--;
        }
        nums=ans;
    }
};