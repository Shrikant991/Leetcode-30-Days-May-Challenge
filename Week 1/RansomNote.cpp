class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int i;
        unordered_map<char,int> m;
        for(i=0;i<magazine.size();i++)
        {
            m[magazine[i]]++;
        }
        for(i=0;i<ransomNote.size();i++)
        {
            if(m[ransomNote[i]]>0)
            {
                m[ransomNote[i]]--;
            }
            else
                return false;
        }
        return true;

    }
};
