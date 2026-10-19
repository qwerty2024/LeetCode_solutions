class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    stack<pair<int, int>> st;
                    long long sum = 0;
                    st.push({i, j});

                    while (!st.empty()) {
                        auto p = st.top(); 
                        if (grid[p.first][p.second] < 0) {
                            st.pop();
                            continue;
                        }
                        sum += grid[p.first][p.second];
                        grid[p.first][p.second] = -1;
                        st.pop();
                        if (p.second - 1 >= 0 && grid[p.first][p.second - 1] > 0)
                            st.push({p.first, p.second - 1});
                        if (p.second + 1 < n && grid[p.first][p.second + 1] > 0)
                            st.push({p.first, p.second + 1});
                        if (p.first - 1 >= 0 && grid[p.first - 1][p.second] > 0)
                            st.push({p.first - 1, p.second});
                        if (p.first + 1 < m && grid[p.first + 1][p.second] > 0)
                            st.push({p.first + 1, p.second});
                    }

                    if (sum % k == 0)
                        ans++;
                }
            }
        }

        return ans;
    }
};