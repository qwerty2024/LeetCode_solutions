class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool test1 = true;
        bool test2 = true;
        vector<int> tmp = nums;

        for(int i = 1; i < tmp.size(); i++) {
            if (tmp[i - 1] >= tmp[i]) {
                tmp.erase(tmp.begin() + i - 1);
                break;
            }
        }
        
        for(int i = 1; i < tmp.size(); i++) {
            if (tmp[i - 1] >= tmp[i]) {
                test1 = false;
            }
        }

        for(int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] >= nums[i]) {
                nums.erase(nums.begin() + i);
                break;
            }
        }
        
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] >= nums[i]) {
                test2 = false;
            }
        }

        return test1 || test2;
    }
};