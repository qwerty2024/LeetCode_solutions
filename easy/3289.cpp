class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<bool> cont(100, false);

        for (auto& a : nums) {
            if (cont[a])
                ans.push_back(a);
            else
                cont[a] = true;
        }

        return ans;
    }
};