class Solution {
    int n = 0;
    int ans;

    void test(vector<int>& nums, int i, int curr) {
        i++;
        if (i == n - 1) {
            ans += curr ^ nums[i];
            ans += curr;
            return;
        }

        test(nums, i, curr);
        test(nums, i, curr ^ nums[i]);
    }

public:
    int subsetXORSum(vector<int>& nums) {
        n = nums.size();
        if (n == 1)
            return nums[0];
            
        test(nums, 0, 0);
        test(nums, 0, nums[0]);
        return ans;
    }
};