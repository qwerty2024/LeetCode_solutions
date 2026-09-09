class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;

        if (n < 1000) {
            return 0;
        }

        if (n < 1'000'000)
        {
            return ans + (n - 999) * 1;
        }
        else
        {
            ans += 999'000;
        }

        if (n < 1'000'000'000)
        {
            return ans + (n - 999'999) * 2;
        }
        else
        {
            ans += (999'000'000) * 2;
        }

        if (n < 1'000'000'000'000)
        {
            return ans + (n - 999'999'999) * 3;
        }
        else
        {
            ans += (999'000'000'000) * 3;
        }

        if (n < 1'000'000'000'000'000)
        {
            return ans + (n - 999'999'999'999) * 4;
        }
        else
        {
            ans += (999'000'000'000'000) * 4;
        }

        return ans + 5;
    }
};