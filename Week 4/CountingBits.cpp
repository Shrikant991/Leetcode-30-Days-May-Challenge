class Solution {
public:
    vector<int> countBits(int num) {


        vector<int> v(num+1,0);
        for(int i=0;i<v.size();i++)
        {
            v[i]=(v[i/2]+i%2);
        }
        return v;
    }
};
