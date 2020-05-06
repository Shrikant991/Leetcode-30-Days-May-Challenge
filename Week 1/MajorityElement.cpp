class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int i,m=nums[0],c=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==m)
            {
                c++;
            }
            else
            {
                c--;
                if(c==0)
                {
                    m=nums[i];
                    c++;
                }
            }
        }
        return m;
    }
};
