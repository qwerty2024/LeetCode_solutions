class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int mini = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            mini = min(mini, abs(arr[i - 1] - arr[i]));
        }

        for (int i = 1; i < arr.size(); i++) {
            if (mini == abs(arr[i - 1] - arr[i])) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }

        return ans;
    }
};