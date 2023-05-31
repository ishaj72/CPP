class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int a = INT_MAX;
        int b = 0;
        for(int i=0 ; i<n;i++){
            a = min(a,prices[i]);
            b = max(b,prices[i]-a);

        }
        return b;
    }
};
