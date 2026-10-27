class Solution {
public:
    int minimizedStringLength(string s) {
        vector<bool> v(26, false);
        int ans = 0;

        for (const auto& a : s) {
            v[a - 'a'] = true;
        }

        for (const auto& a : v) {
            if (a)
                ans++;
        }

        return ans;
    }
};