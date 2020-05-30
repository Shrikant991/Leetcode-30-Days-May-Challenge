class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {


        vector<pair<int,pair<int,int>>> f;
        vector<vector<int>> v(K,vector<int>(2,0));
        int i,s=0;
        for(i=0;i<points.size();i++)
        {
            s=(points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
            f.push_back(make_pair(s,make_pair(points[i][0],points[i][1])));
        }
        sort(f.begin(),f.end());
        int j=0;
        for(i=0;i<f.size();i++)
        {
            v[j][0]=f[i].second.first;
            v[j][1]=f[i].second.second;
            j++;
            K--;
            if(K==0)
                break;
        }
        return v;

    }
};
