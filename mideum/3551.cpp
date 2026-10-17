class Solution {
    int counter(int n) {
        int ans = 0;

        while (n > 0) {
            ans += n % 10;
            n /= 10;
        }

        return ans;
    }

public:
    int minSwaps(vector<int>& nums) {
        vector<vector<int>> vp;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            vp.push_back({counter(nums[i]), nums[i], i});
        }

        struct
        {
            bool operator()(const vector<int>& left, const vector<int>& right) const {         
                if (left[0] == right[0])
                    return left[1] < right[1];
                return left[0]< right[0]; 
            }
        } cmp;

        sort(vp.begin(), vp.end(), cmp);

        //for (const auto& a : vp) {
        //    cout << a.first << " " << a.second << endl;;
        //}

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != vp[i][1]) {
                int j = i;
                while (nums[j] != vp[j][1]) {
                    swap(nums[j], nums[vp[j][2]]);
                    j = vp[j][2];
                    ans++;
                }
            }
        }

        return ans;
    }
};