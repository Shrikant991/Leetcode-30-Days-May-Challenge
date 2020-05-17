class Solution {
public:
    bool isok(vector<int> s,vector<int> p)
    {
        for(int i=0;i<26;i++)
        {
            if(s[i]!=p[i])
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {


        int i,j;
        vector<int> v;
        vector<int> mp(26,0);
        vector<int> ms(26,0);
        if(s.length()==0 || p.length()>s.length())
            return v;
        for(i=0;i<p.length();i++)
        {
            mp[p[i]-'a']++;
        }
        for(i=0;i<p.length();i++)
        {
            ms[s[i]-'a']++;
        }
        i=0;
        for(j=p.length();j<s.length();j++)
        {
            if(isok(ms,mp))
            {
                v.push_back(i);
                ms[s[i]-'a']--;
                i++;
            }
            else
            {
                ms[s[i]-'a']--;
                i++;
            }
            ms[s[j]-'a']++;
        }
        if(isok(ms,mp))
            v.push_back(i);
        return v;
    }
};
