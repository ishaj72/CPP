class Solution {
public:
    int findMin(vector<int>& nums) {
        int m ;
        m = *min_element(nums.begin(),nums.end());
        return m;
    }
};
