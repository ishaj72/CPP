class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int> n(numbers.size());
        for(int i = 0 ; i<=numbers.size();i++){
            for(int j =1 ; j<=numbers.size();j++){
                if (numbers[i]+numbers[j]==target){
                    return{i+1,j+1};
                }
            }
        }
        return {};
    }
};
//the code is not completely correct.