class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        int n = code.size();
        int kk = abs(k);

        for (int i = 0; i < code.size(); i++) {
            int sum = 0;
            int offset = k > 0 ? i + 1 : i + (n + k);

            for (int j = 0; j < kk; j++) {
                sum += code[(j + offset) % n];
            }

            ans.push_back(sum);
        }

        return ans;
    }
};