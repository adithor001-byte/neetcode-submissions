class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        vector<int>l;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back(target-nums[i]);
        }
        for(int i=0;i<v.size();i++)
        {
            auto it=find(nums.begin(),nums.end(),v[i]);
            if(it!=nums.end()){
            int j=it-nums.begin();
            if(i!=j){
            l.push_back(min(i,j));
            l.push_back(max(i,j));
            return l;
            }
            }
        }
        return {};
    }
};
