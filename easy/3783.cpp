class Solution {
public:
    int mirrorDistance(int n) {
        int save = n;
        int rev = 0;

        while (n > 0)
        {
            rev *= 10;
            rev += n % 10;
            n /= 10;
        }

        return abs(rev - save);
    }
};