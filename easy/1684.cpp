class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool> data(26, false);
        int ans = 0;

        for (const auto& a : allowed) {
            data[a - 'a'] = true;
        }

        for (const auto& a : words) {
            bool test = true;
            for (const auto& sym : a) {
                if (data[sym - 'a'] == false) {
                    test = false;
                    break;
                }
            }

            if (test)
                ans++;
        }

        return ans;
    }
};