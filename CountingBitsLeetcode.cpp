class Solution {
int binaryNum[32];
public:
    void DecToBinary(int n){
        int i = 0 ;
        while(n>0){
            binaryNum[i] = n%2;
            n = n/2;
            i++;
        }
    }
    vector<int> countBits(int n) {
        vector<int> arr(n+1);
        for(int i = 0 ; i <=n ; i++){
            DecToBinary(i);
            int count = 0;
            for(int j = 0 ; j < 32 ; j++){
                if(binaryNum[j] == 1 ){
                    count++;
                }
            }
            arr[i] = count;
        }
        return arr;
    }
};
