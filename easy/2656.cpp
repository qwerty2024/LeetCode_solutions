class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(), nums.end());
        return ((maxi * 2 + k - 1) * k) / 2;
    }
};