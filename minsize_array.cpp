class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len=1e9;

        int i=0,j=0;

        int sum=0;

        while(j<nums.size())
        {
            sum +=nums[j];
            if(sum<target) j++;
            else
            {
                while(sum>=target)
                {
                    len = min(len,j-i+1);
                    sum-=nums[i++];
                }
                j++;
            }
        }
        return (len==1e9)? 0:len;
    }
};
