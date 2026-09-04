class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            int j=target-nums[i];
            auto it=mp.find(j);
            if(it!=mp.end())
            {
                if(i!=it->second)
                {
                if(i>it->second)
                return {it->second,i};
                else
                return {i,it->second};
                }
            }
        }
        return {};
    }
};
