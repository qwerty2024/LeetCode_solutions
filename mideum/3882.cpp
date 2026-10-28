class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<bitset<1024>>> data(m, vector<bitset<1024>>(n, 0));
        data[0][0].set(grid[0][0]);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (j > 0) {
                    for (int k = 0; k < 1024; k++) {
                        if (data[i][j - 1].test(k))
                            data[i][j].set(k ^ grid[i][j]); 
                    }
                }

                if (i > 0) {
                    for (int k = 0; k < 1024; k++) {
                        if (data[i - 1][j].test(k))
                            data[i][j].set(k ^ grid[i][j]); 
                    }
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < 1024; i++) {
            if (data[m - 1][n - 1].test(i))
                return i;
        }

        return 0;
    }
};