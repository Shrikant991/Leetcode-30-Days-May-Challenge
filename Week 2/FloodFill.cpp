class Solution {
public:
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    bool v[51][51];
    bool isok(int x,int y,int r,int c)
    {
        if(x>=0 && y>=0 && x<r && y<c)
            return true;
        else
            return false;
    }
    void dfs(vector<vector<int>>& image,int i,int j,int newColor,int in)
    {
        image[i][j]=newColor;
        v[i][j]=true;
        for(int p=0;p<4;p++)
        {
            if(isok(i+dx[p],j+dy[p],image.size(),image[0].size()) && image[i+dx[p]][j+dy[p]]==in && v[i+dx[p]][j+dy[p]]==false)
                dfs(image,i+dx[p],j+dy[p],newColor,in);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {


        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};
