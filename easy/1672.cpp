class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;

        for (const auto& a : accounts) {
            int sum = 0;
            for (const auto& b : a) {
                sum += b;
            }
            maxi = max(maxi, sum);
        }

        return maxi;
    }
};