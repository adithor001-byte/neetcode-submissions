class Solution {
public:
    bool isAnagram(string s, string t) {
        if(!s.empty() && !t.empty())
        {
        unordered_map<int,int>s_map;
        unordered_map<int,int>t_map;
        for(auto i:s)
        {
            s_map[i]++;
        }
        for(auto j:t)
        {
            t_map[j]++;
        }
        if(s_map==t_map)
        return true;
        else 
        return false;
    }
    else if(s.empty() && t.empty())
    return true;
    else
    return false;
    }
};
