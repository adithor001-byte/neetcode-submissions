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
        auto it1=v1.begin();
        auto it2=v2.begin();
        while(it1!=v1.end() && it2!=v2.end())
        {
            if((it1->first==it2->first))
            {
            if(it1->second!=it2->second)
            {
                return false;
            }
            }
            else
            return false;
            it1++;
            it2++;
        }
        return true;
        }
    }
};
