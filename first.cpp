class Solution {
public:
    int search(vector<int>& nums, int target) {
        int arr = nums.size()-1;
        for(int a = 0 ; a<=arr;a++){
            int val = (a + arr)/2;
            if(nums[val]==target){
                return val;
            }
            else if(nums[val]>target){
                arr = val-1;
            }
            else{
                a = val+1;
            }
           
        }
        return -1;
    }
};

