class Solution {
public:
    bool isValid(string s) {
        stack<char> ab;
        for (auto i:s){
            if (i == '(' or i == '{' or i == '['){
                ab.push(i);
            }
            else{if(ab.empty() or (ab.top()=='(' and i!=')') or (ab.top()=='{' and i!='}') or (ab.top()=='[' and i!=']'))
            return false;
            ab.pop();
            }
        }
        return ab.empty();
    }
};