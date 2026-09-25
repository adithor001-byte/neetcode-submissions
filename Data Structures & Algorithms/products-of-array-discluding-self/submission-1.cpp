class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>suffix;
        suffix.push_back(1);
        vector<int>preffix;
        preffix.push_back(1);
        vector<int>ans;
        for(int i=1;i<nums.size();i++)
        {
            preffix.push_back(preffix[i-1]*nums[i-1]);
        }
        for(int i=1;i<nums.size();i++)
        {
            suffix.push_back(nums[nums.size()-i]*suffix[i-1]);
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(preffix[i]*suffix[nums.size()-1-i]);
        }
        return ans;
    }
};
