class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        int i,y,x;
        y=coordinates[1][1]-coordinates[0][1];
        x=coordinates[1][0]-coordinates[0][0];
        for(i=1;i<coordinates.size();i++)
        {
            if(x*(coordinates[i][1]-coordinates[0][1])!=y*(coordinates[i][0]-coordinates[0][0]))
                return false;
        }
        return true;

    }
};
