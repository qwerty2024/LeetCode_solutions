class Solution {
    int counter(int a) {
        int sum = 0;

        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }

        return sum;
    }
public:
    int minElement(vector<int>& nums) {
        int mini = 100000;

        for (const auto& a : nums) {
            mini = min(mini, counter(a));
        }

        return mini;
    }
};