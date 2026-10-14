class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        int current = 9;
        int s = sum;

        while (num > 0) {
            if (current > 0 && current > sum) {
                current--;
                continue;
            }

            ans += current + '0';
            sum -= current;
            num--;
        }

        int test = 0;
        for (const auto& a : ans)
            test += a - '0';

        return test == s ? ans : "";
    }
};