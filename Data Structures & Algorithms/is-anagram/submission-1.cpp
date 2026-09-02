class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        else{
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(auto i:t)
        {
            mp2[i]++;
        }
        auto it1=mp1.begin();
        auto it2=mp2.begin();
        while(it1!=mp1.end() && it2!=mp2.end())
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
