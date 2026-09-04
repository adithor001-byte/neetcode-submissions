class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int>s;
        vector<int>k;
        for(int i=0;i<nums.size();i++)
        {
            int key=target-nums[i];
            if(s.find(key)!=s.end())
            {
                auto n=find(nums.begin(),nums.end(),key);
                int j=n-nums.begin();
                k.push_back(j);
                k.push_back(i);
                return k;
            }
            else
            {
                s.insert(nums[i]);
            }
        }

    }
};
