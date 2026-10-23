class Solution {
public:
    bool hasMatch(string s, string p) {
        vector<int> points;
        string str1 = "", str2 = "";
        int k = 0;

        while (p[k] != '*') {
            str1 += p[k];
            k++;
        }
        k++;
        str2 = p.substr(k, p.size() - k);

        if (s.size() < str1.size() + str2.size())
            return false;

        for (int i = 0; i <= s.size() - str2.size() - str1.size(); i++) {
            if (str1 == "" || s[i] == str1[0]) {
                string test = s.substr(i, str1.size());

                if (test == str1) {
                    if (str2 == "")
                        return true;

                    for (int j = i + str1.size(); j <= s.size()- str2.size(); j++) {
                        string test1 = s.substr(j, str2.size());

                        if (test1 == str2)
                            return true;
                    }
                }
            }
        }

        return false;
    }
};