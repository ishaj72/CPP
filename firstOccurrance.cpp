class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = haystack.length();
        for(int i = 0 ; i < x ; i++ ){
            if(haystack.substr(i,needle.length())==needle){
                return i ;
            }
        }
        return -1;
    }
};