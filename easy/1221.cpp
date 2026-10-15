class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int ans = 0;

        for (const auto& a : s) {
            a == 'L' ? count++ : count--;
            if (count == 0)
                ans++;
        } 

        return ans;
    }
};