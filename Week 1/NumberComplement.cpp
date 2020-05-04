class Solution {
public:
    int findComplement(int num) {

        int count=0;
        int i=num;
        while(i!=0){
            i=i/2;
            count++;
        }
        int ans = pow(2,count) - 1;
        return num ^ ans;
    }
};
