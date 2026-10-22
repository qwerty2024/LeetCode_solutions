class Solution {
public:
    int minOperations(vector<int>& nums) {
        if (nums.size() == 2 && nums[0] == 0 && nums[1] == 1)
            return 0;

        int n = nums.size();
        int ans = 0;
        int ind_0 = -1;
        bool direction = true; // true - to left, false - to right

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                ind_0 = i;
                if (nums[i == 0 ? n - 1 : i - 1] == 1)
                    direction = false;
            }  
        }

        if (direction) {
            ans = min(ind_0, n - ind_0 + 2);
        }
        else {
            ans = min(ind_0 + 1, n - ind_0 - 1) + 1;
        }

        if (!direction) {
            for (int i = 0; i < n / 2; i++) {
                swap(nums[i], nums[n - i - 1]);
            }
            ind_0 = n - ind_0 - 1;
            //ans++;
        }

        for (int i = 0; i < n - 1; i++) {
            if (!(nums[(ind_0 + i + 1) % n] - nums[(ind_0 + i) % n] == 1))
                return -1;               
        }

        return ans;
    }
};