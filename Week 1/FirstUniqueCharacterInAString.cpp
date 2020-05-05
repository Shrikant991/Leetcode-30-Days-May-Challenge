class Solution {
public:
    int firstUniqChar(string s) {

        int i;
        vector<int> a(26,0);
        for(i=0;i<s.length();i++)
        {
            a[s[i]-'a']++;
        }
        for(i=0;i<s.length();i++)
        {
            if(a[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};
