class Solution {
public:
    int numJewelsInStones(string J, string S) {

        int i,c=0;
        unordered_set<char> m;
        for(i=0;i<J.length();i++)
        {
            m.insert(J[i]);
        }
        for(i=0;i<S.length();i++)
        {
            if(m.find(S[i])!=m.end())
                c++;
        }
        return c;

    }
};
