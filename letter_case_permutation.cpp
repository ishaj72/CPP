class Solution {
    
    /*
        Time Complexity : O(2^n)
        Space Complexity : O(n)
    */
    
private:
    vector<string> res;
    string temp = "";
    
    void solve(int i, string s){
        if(i >= s.length()){
            res.push_back(temp);
            return;
        }
        
        // Take as it is or digit
        temp.push_back(s[i]);
        solve(i+1, s);
        temp.pop_back();
        
        // If char take upper or lowercase
        if(isalpha(s[i])){
            if(isupper(s[i])){
                temp.push_back(tolower(s[i]));
            }else{
                temp.push_back(toupper(s[i]));
            }
            
            solve(i+1, s);
            temp.pop_back();
        }
    }
    
public:
    vector<string> letterCasePermutation(string s) {
        solve(0, s);
        return res;
    }
};