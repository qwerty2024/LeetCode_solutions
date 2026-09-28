class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int curr = 0;
        for (auto& a : s) {
            if (a == '(')
                curr++;
            if (a == ')')
                curr--;
            ans = max(ans, curr);
        }

        return ans;
    }
};