class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0 ;i<=nums.size();i++){
            std::stable_partition(nums.begin(),nums.end(),[](int n) { return n != 0; });
        }
    }
};
//stable_partition return all those values first for which the condition is true and then those values
//for which the condition is not true