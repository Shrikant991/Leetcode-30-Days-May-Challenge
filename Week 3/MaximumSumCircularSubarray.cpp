
class Solution {
public:

    int maxSubarraySumCircular(vector<int>& A) {

        if(A.size()==0)
            return 0;
    int maxTillHere=A[0],maxtotal=A[0];
    int mintillhere=A[0],minTotal=A[0];
    int sum=A[0];
    for(int i=1;i<A.size();i++)
    {
        if(maxTillHere+A[i]>A[i])
            maxTillHere+=A[i];
        else
            maxTillHere=A[i];

        maxtotal=max(maxtotal,maxTillHere);

        if(mintillhere+A[i]<A[i])
            mintillhere+=A[i];
        else
            mintillhere=A[i];

        minTotal=min(minTotal,mintillhere);
        sum+=A[i];
    }
    if(sum==minTotal)
        return maxtotal;
    return max(sum-minTotal,maxtotal);

    }
};
