class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int ans = 0;

        for (const auto& a : s) {
            if (a == '(') {
                open++;
            }
            else {
                open--;
            }

            if (open < 0) {
                open = 0;
                ans++;
            }
        }

        return ans + open;
    }
};