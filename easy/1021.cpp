class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int i = 0;

        for (const auto& a : s) {
            if (i == 0) {
                i++;
                continue;
            }
            else {
                if (a == ')') {
                    i--;
                }
                else {
                    i++;
                }
            }

            if (i > 0)
                ans += a;
        }

        return ans;
    }
};