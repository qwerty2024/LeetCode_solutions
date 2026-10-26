class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> um;

        for (const auto& a : deck) {
            um[a]++;
        }

        int ans = um.begin()->second;

        for (const auto& a : um) {
            ans = gcd(ans, a.second);
        }

        return ans > 1;
    }
};