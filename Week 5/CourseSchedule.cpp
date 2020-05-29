class Solution {
public:
    bool v[100001];
    bool s[100001];
    vector<int> adj[100001];
    bool dfs(int i)
    {
        if(v[i]==false)
        {
            v[i]=true;
            s[i]=true;
            for(auto j:adj[i])
            {
                if(!v[j] && dfs(j))
                    return true;
                else if(s[j]==true)
                    return true;
            }
        }
        s[i]=false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int i,x,y;
        for(i=0;i<prerequisites.size();i++)
        {
            x=prerequisites[i][0];
            y=prerequisites[i][1];
            adj[y].push_back(x);
        }
        for(i=0;i<numCourses;i++)
        {
            if(v[i]==false)
            {
                if(dfs(i))
                    return false;
            }
        }
        return true;
    }
};
