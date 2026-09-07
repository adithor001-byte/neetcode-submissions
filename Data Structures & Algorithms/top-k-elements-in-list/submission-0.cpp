class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto &p:mp)
        {
            v.push_back({p.second,p.first});
        }
        sort(v.begin(),v.end());
        vector<int>m;
        int i=v.size()-1;
        while(k!=0)
        {
            m.push_back(v[i].second);
            i=i-1;
            k=k-1;
        }
        return m;
    }
};
