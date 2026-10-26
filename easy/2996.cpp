class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int prev = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == prev + 1) {
                sum += nums[i];
                prev = nums[i];
            }
            else   
                break;
        }

        while (1) {
            auto it = find(nums.begin(), nums.end(), sum);
            if (it == nums.end()) {
                return sum;
            }
            sum++;
        }

        return 0;
    }
};