class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> diff;
        for(int i = 0 ; i< s.length();i++){
            if(diff.count(s[i])){
                if(diff[s[i]]!=t[i]){
                    return false;
                }
            }
            else {
            vector<char> values;
            for (auto it : diff) {
                values.push_back(it.second);
            }
            if (find(values.begin(), values.end(), t[i])!= values.end()) {
                return false;
            }
            else {
                diff[s[i]] = t[i];
              }
           }
        }
        return true;
    }
};
