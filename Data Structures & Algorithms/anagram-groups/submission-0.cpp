class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>>mp;
      for(string s:strs)
      {
        string k=s;
        sort(s.begin(),s.end());
        mp[s].push_back(k);
      }
      vector<vector<string>>v;
      for(auto &it:mp)
      {
        v.push_back(it.second);
      }
      return v;
    }
};
