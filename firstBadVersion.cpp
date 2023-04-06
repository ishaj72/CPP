// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int val = n, s = 1;
        while(s<=val){
            int a;
            a = s +(val-s)/2;
            if(isBadVersion(a)){
                val = a -1;
            }
            else if(!isBadVersion(a)){
                s = a + 1;
            }
        }
    return s;
    }
};