class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> us;
        for (const auto& a : paths) {
            us.insert(a[1]);
        }

        for (const auto& a : paths) {
            us.erase(a[0]);
        }

        return *us.begin();
    }
};