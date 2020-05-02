// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n){

        int mid,l=1,r=n;
        if(n==0)
            return -1;

        while(l<r)
        {
            mid=l+(r-l)/2;
            if(isBadVersion(mid)==true)
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};
