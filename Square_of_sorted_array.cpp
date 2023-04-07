class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int value = nums.size();
        for(int i=0;i<=value;i++){
            nums[i] = abs(nums[i]*nums[i]);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};