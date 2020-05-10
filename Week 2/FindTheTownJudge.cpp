class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {

        int i;
        vector<int> m(N+1,0);
        for(i=0;i<trust.size();i++)
        {
            m[trust[i][0]]--;
            m[trust[i][1]]++;
        }
        for(i=1;i<=N;i++)
        {
            if(m[i]==N-1)
                return i;
        }
        return -1;

    }
};
