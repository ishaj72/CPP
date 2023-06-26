class Solution {
public:
    int ans(vector<int> nums){
        int n = nums.size();
        if (n==1){
            return nums[0];
        }
        else{
            int prev2 = nums[0];
            int prev1 = max(nums[0],nums[1]);
            for(int i = 2 ;i<n ; i++){
                int curr= max(nums[i]+prev2,prev1);
                prev2 = prev1;
                prev1 = curr;
            }
            return prev1;
        }
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1){
            return nums[0];
        }
        else{
            vector<int> v1(nums.begin()+1,nums.end());
            vector<int> v2(nums.begin(),nums.end()-1);
            return max(ans(v1),ans(v2));
        }
    }
};
