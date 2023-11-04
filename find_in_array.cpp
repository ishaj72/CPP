class Solution{
    public:
    vector<int> leaders(int a[], int n){
        vector<int> result;
        int maxRight = a[n - 1];  
        result.push_back(maxRight);

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= maxRight) {
                maxRight = a[i];
                result.push_back(a[i]);
            }
        }
    everse(result.begin(), result.end());

    return result;
        
    }
};
