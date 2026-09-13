class Solution {
    int n = 0;

private:
    int test(vector<vector<int>>& img1, vector<vector<int>>& img2, int i, int j) {
        int res = 0;
        for (int ii = max(0, i); ii - i < n && ii < n; ii++) {
            for (int jj = max(0, j); jj - j < n && jj < n; jj++) {
                if (img1[ii - i][jj - j] == 1 && img2[ii][jj] == 1) {
                    res++;
                }
            }
        }
        return res;
    }

public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        n = img1.size();
        int ans = 0;

        for (int i = 1 - n; i < 2 * n; i++) {
            for (int j = 1 - n; j < 2 * n; j++) {
                ans = max(ans, test(img1, img2, i, j));
            }
        }

        return ans;
    }
};