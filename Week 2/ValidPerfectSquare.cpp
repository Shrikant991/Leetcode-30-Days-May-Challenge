class Solution {
public:
    bool isPerfectSquare(int num) {

        long long int l=1;
        long long int h=num;
        long long int mid;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(mid*mid==num)
            {
               return true;
            }
            if(mid*mid>num)
                h=mid-1;
            else
                l=mid+1;
        }
        return mid*mid==num;

    }
};
