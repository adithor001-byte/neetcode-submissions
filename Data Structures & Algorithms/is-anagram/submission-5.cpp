class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        else{
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(auto i:t)
        {
            mp2[i]++;
        }
        vector<pair<char,int>>v1(mp1.begin(),mp1.end());
        vector<pair<char,int>>v2(mp2.begin(),mp2.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
       if(v1!=v2)
       {
        return false;
       }
        return true;
        }
    }
};
