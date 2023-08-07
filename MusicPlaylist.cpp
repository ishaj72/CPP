#define mod 1000000007 

class Solution {
public:
    int n , goal , k ;

    long long d[110][110];

    long long solve(int len, int num){

        if(len==goal){
            return num == n;
        }
        if(d[len][num]!= -1){
            return d[len][num];
        }
        long long ans = (solve(len+1, num)*max( 0 , num - k))%mod;
        ans += (solve(len+1, num+1)*(n-num))%mod;
        ans%=mod;

        return d[len][num] = ans%mod;

    }

    
    int numMusicPlaylists(int n, int goal, int k) {
        this -> n = n;
        this -> goal = goal;
        this -> k = k;
        memset(d, -1 ,sizeof(d));
        return solve(0,0);

    }
};
