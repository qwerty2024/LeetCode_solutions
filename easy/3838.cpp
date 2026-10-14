class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";

        for (const auto& a : words) {
            int sum = 0;

            for (int i = 0; i < a.size(); i++) {
                sum += weights[a[i] - 'a'];
            }

            sum %= 26;
            ans += 25 - sum + 'a';
        }

        return ans;
    }
};