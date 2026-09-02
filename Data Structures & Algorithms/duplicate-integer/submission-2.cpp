class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_map<int,int>maps;
       int count=0;
       for(auto i:nums)
       {
        maps[i]++;
       } 
       for(auto& i:maps)
       {
        if(i.second>1)
        {
            return true;
            break;
        }
       }
       return false;
    }
};