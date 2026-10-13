class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans = 0;

        for (auto& a : nums) {
            if (a < 0)
                a = -a;
        }

        sort(nums.begin(), nums.end());

        int n = nums.size(); 

        for (int i = 0; i < n / 2; i++) {
            ans -= nums[i] * nums[i];
            ans += nums[n - 1 - i] * nums[n - 1 - i];
        }

        if (n % 2 == 1)
            ans += nums[n / 2] * nums[n / 2];

        return ans;
    }
};