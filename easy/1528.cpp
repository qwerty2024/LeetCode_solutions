class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> tmp(s.size());

        for (int i = 0; i < s.size(); i++) {
            tmp[indices[i]] = s[i];
        }

        string ans = "";
// можно сразу в ans писать !!!
        for(const auto& a : tmp) {
            ans += a;
        }    

        return ans;
    }
};