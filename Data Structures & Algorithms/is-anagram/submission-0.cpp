class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<char>v1;
       vector<char>v2;
       if(s.length()!=t.length())
       return false;
       else{
       for(int i=0;i<s.length();i++)
       {
        v1.push_back(s[i]);
       }
        for(int i=0;i<t.length();i++)
       {
        v2.push_back(t[i]);
       }
       sort(v1.begin(),v1.end());
       sort(v2.begin(),v2.end());
       for(int i=0;i<s.length();i++)
       {
        if(v1[i]!=v2[i])
        {
            return false;
        }
       }
       return true;
    }
    }
};
