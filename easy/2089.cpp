class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int less = 0, eq = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < target)
                less++;
            else if (nums[i] == target)
                eq++;
        }

        for (int i = 0; i < eq; i++) {
            ans.push_back(less++);
        }

        return ans;
    }
};