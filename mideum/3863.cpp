class Solution {
public:
    int minOperations(string s) {
        int n = s.size();
        
        if (n == 1)
            return 0;

        vector<int> v(26, 0);
        v[s[0] - 'a']++;
        bool test = true;
        
        for (int i = 1; i < n; i++) {
            v[s[i] - 'a']++;
            if (s[i - 1] > s[i])
                test = false;
        }

        if (n == 2)
            return s[0] > s[1] ? -1 : 0;

        if (test)
            return 0;

        int mini_ind = -1;
        int maxi_ind = -1;
        
        for (int i = 0; i < 26; i++) {
            if (v[i] != 0 && mini_ind < 0)
                mini_ind = i;
            if (v[25 - i] != 0 && maxi_ind < 0)
                maxi_ind = 25 - i;
        }
        
        if (s[0] == mini_ind + 'a' || s[n - 1] == maxi_ind + 'a')
            return 1;

        //if (v[mini_ind] > 1 || v[maxi_ind] > 1)
        //    return 2;

        if (v[mini_ind] == 1 && v[maxi_ind] == 1 && maxi_ind + 'a' == s[0] && mini_ind + 'a' == s[n - 1])
            return 3;

        return 2;
    }
};