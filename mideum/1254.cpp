class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!(i > 0 && i < n - 1 && j > 0 && j < m - 1) && grid[i][j] == 0) {
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while (!q.empty()) {
                        auto p = q.front();
                        q.pop();
                        grid[p.first][p.second] = 2;
                        if (p.first - 1 >= 0 && grid[p.first - 1][p.second] == 0)
                            q.push({p.first - 1, p.second});
                        if (p.first + 1 <= n - 1 && grid[p.first + 1][p.second] == 0)
                            q.push({p.first + 1, p.second});
                        if (p.second - 1 >= 0 && grid[p.first][p.second - 1] == 0)
                            q.push({p.first, p.second - 1});
                        if (p.second + 1 <= m - 1 && grid[p.first][p.second + 1] == 0)
                            q.push({p.first, p.second + 1});
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    ans++;
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while (!q.empty()) {
                        auto p = q.front();
                        q.pop();
                        grid[p.first][p.second] = 2;
                        if (p.first - 1 >= 0 && grid[p.first - 1][p.second] == 0)
                            q.push({p.first - 1, p.second});
                        if (p.first + 1 <= n - 1 && grid[p.first + 1][p.second] == 0)
                            q.push({p.first + 1, p.second});
                        if (p.second - 1 >= 0 && grid[p.first][p.second - 1] == 0)
                            q.push({p.first, p.second - 1});
                        if (p.second + 1 <= m - 1 && grid[p.first][p.second + 1] == 0)
                            q.push({p.first, p.second + 1});
                    }
                }
            }
        } 

        return ans;
    }
};