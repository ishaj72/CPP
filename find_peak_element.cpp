class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int m ; 
        int result;
        m = *max_element(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==m){
                result = i;
            }
        }
        return result;
    }
};
