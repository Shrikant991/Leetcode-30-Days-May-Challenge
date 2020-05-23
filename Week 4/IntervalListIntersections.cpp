class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {


        int i=0,j=0,x,y;
        vector<vector<int>> v;
        while(i<A.size() && j<B.size())
        {
            if(A[i][1]<B[j][0])
                i++;
            else if(A[i][0]>B[j][1])
                j++;
            else
            {
                x=max(A[i][0],B[j][0]);
                y=min(A[i][1],B[j][1]);
                v.push_back({x,y});
                if(A[i][1]>B[j][1])
                    j++;
                else if(A[i][1]<B[j][1])
                    i++;
                else if(A[i][1]==B[j][1])
                {
                    i++;
                    j++;
                }
            }

        }
        return v;

    }
};
