class Solution {
public:
    bool v[2001];
    int col[2001];
    vector<int> adj[2001];
    bool dfs(int i,int c)
    {
        v[i]=true;
        col[i]=c;
        for(auto j: adj[i])
        {
            if(v[j]==false)
            {
                if(dfs(j,c^1)==false)
                    return false;
            }
            else
            {
                if(col[j]==c)
                    return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {

        int x,y;
        for(int i=0;i<dislikes.size();i++)
        {
            x=dislikes[i][0];
            y=dislikes[i][1];
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=N;i++)
        {
            if(v[i]==false)
            {
                if(!dfs(i,0))
                {
                    return false;
                }
            }
        }
        return true;


    }
};

