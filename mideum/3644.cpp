class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = 131071;
        bool test = false;

        for (int i = 0; i < nums.size(); i++) {
            if (i != nums[i]) {
                ans &= nums[i];
                test = true;
            }
        }

        return test ? ans : 0;
    }
};