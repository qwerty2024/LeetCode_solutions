class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> v(26, 0);

        for (const auto& a : s) {
            v[a - 'a']++;
        }

        int glasn = 0;
        int sogl = 0;

        for (int i = 0; i < 26; i++) {
            if (i == 'a' - 'a' || i == 'e' - 'a' || i == 'i' - 'a' || i == 'o' - 'a' || i == 'u' - 'a') {
                glasn = max(glasn, v[i]);
            }
            else {
                sogl = max(sogl, v[i]);
            }
        }

        return glasn + sogl;
    }
};