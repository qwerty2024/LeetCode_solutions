class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> us;
        int n = digits.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i != j && i != k && j != k)
                    {
                        if ((digits[i] * 100 + digits[j] * 10 + digits[k]) % 2 == 0 && (digits[i] * 100 + digits[j] * 10 + digits[k]) > 99)
                        {
                            us.insert(digits[i] * 100 + digits[j] * 10 + digits[k]);
                            //cout << digits[i] * 100 + digits[j] * 10 + digits[k] << endl;
                        }
                    }
                    else
                        continue;
                }
            }
        }

        return us.size();
    }
};