class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;

        for (int i = 0; i < 31; i++) {
            if ((start % 2 == 0 && goal % 2 == 1) || (start % 2 == 1 && goal % 2 == 0))
                ans++;
            start >>= 1;
            goal >>= 1;
        }

        return ans;
    }
};