class Solution {
    int test(int a) {
        int sum = 0;

        while (a > 0) {
            sum += a % 10;
            a /= 10;
        }

        return sum;
    }

public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (test(nums[i]) == i) {
                return i;
            }    
        }
 
        return -1;
    }
};