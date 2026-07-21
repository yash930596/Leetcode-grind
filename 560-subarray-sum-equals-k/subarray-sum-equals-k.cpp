class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        mp[0]=1; //empty prefix if there is one element
        int prefix=0;
        int count=0;

        for(int num:nums){
            prefix+=num;
            
            //check if current prefix -k is present or not 
            if(mp.count(prefix-k))
            count+=mp[prefix-k];

            //store the current prefix sum
            mp[prefix]++;
        }

        return count;
        
    }
};