class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int l=0;
        int r=nums.size()-1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(mid==nums.size()-1 || mid==0)
                return nums[mid];
            else if(nums[mid]!=nums[mid+1] &&  nums[mid]!=nums[mid-1])
                return nums[mid];
            else if(nums[mid]==nums[mid+1])
            {
                if((mid+2)%2==0)
                    l=mid+1;
                else
                    r=mid-1;
            }
            else if(nums[mid]==nums[mid-1])
            {
                if((mid+1)%2==0)
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return 0;
    }
};
