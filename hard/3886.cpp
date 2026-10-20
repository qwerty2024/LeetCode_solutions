class Solution {
    int n = 0;
    
    void find_divisors(vector<int>& v) {
        int num = n;
        int sqrtN = static_cast<int>(sqrt(n)) + 1;

        for (int i = 1; i < sqrtN; i++) {
            if (n % i == 0) {
                v.push_back(i);
                if (i != n / i)
                    v.push_back(n / i);
            }
        }

        if (n == sqrtN * sqrtN)
            v.push_back(sqrtN);

        sort(v.begin(), v.end());
    }

public:
    int sortableIntegers(vector<int>& nums) {
        n = nums.size();
        //cout << n;
        vector<int> divisors;

        find_divisors(divisors);

        int ans = 0;

        for (const auto& k : divisors) {
            int prev_max = nums[0];
            bool test = true;
            for (int i = 0; i < n; i += k) {
                int count = 0;
                int maxi = nums[i];
                int mini = nums[i];
                for (int j = i; j < i + k; j++) {
                    if (j == 0)
                        continue;

                    if (nums[j - 1] > nums[j])  
                        count++;
                    maxi = max(maxi, nums[j]);
                    mini = min(mini, nums[j]);
                }

                if (count == 1 && nums[i + k - 1] > nums[i]) {
                    test = false;
                    break;
                }

                if (count > 1) {
                    test = false;
                    break;
                }

                if (prev_max > mini && i != 0) {
                    test = false;
                    break;
                }   

                prev_max = maxi;    
            }

            if (test) {
                ans += k;
                //cout << k << endl;
            }
        }

        return ans;
    }
};