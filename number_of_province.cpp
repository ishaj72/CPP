class Solution {
public:

    void temp (vector<vector<int>>& isConnected , int node , vector<bool> & visited){
        visited[node] = true;
        for(int i = 0 ; i < isConnected.size() ; i++){
            if(isConnected[node][i] && !visited[i]){
                temp( isConnected , i , visited);
            }
        }
    }    

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int ans = 0;
        vector<bool> visited(n) ; 
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                ans ++ ; 
                temp(isConnected, i , visited);
            }
        }
        return ans ; 
    }
};
