class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n,m;
        n=A.size();
        m=B.size();
        int i,j;
        vector<vector<int> > dp(n+1,vector<int> (m+1,0));
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(A[i-1]==B[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                dp[i][j]=max(dp[i][j],max(dp[i-1][j],dp[i][j-1]));
            }
        }
        return dp[n][m];

    }
};
