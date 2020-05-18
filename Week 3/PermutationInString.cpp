
class Solution {
public:
    bool isok(vector<int> ms1,vector<int> ms2)
    {
        for(int i=0;i<26;i++)
        {
            if(ms1[i]!=ms2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {

        if(s2.length()==0 || s2.length()<s1.length())
           return false;

        int i,j;
        vector<int> ms1(26,0);
        vector<int> ms2(26,0);
        for(i=0;i<s1.length();i++)
        {
            ms1[s1[i]-'a']++;
            ms2[s2[i]-'a']++;
        }
        i=0;
        for(j=s1.length();j<s2.length();j++)
        {
            if(isok(ms1,ms2))
                return true;
            else
            {
                ms2[s2[i]-'a']--;
                i++;
            }
            ms2[s2[j]-'a']++;
        }
        if(isok(ms1,ms2))
            return true;
        return false;

    }
};
