class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int tmp = 0;

        for (auto a : nums) {
            if (a % 2 == 0)
                tmp++;
        }

        vector<int> ans(nums.size(), 0);

        for (int i = tmp; i < nums.size(); i++)
            ans[i] = 1;

        return ans;
    }
};