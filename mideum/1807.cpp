class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> um;
        string ans = "";

        for (int i = 0; i < knowledge.size(); i++) {
            um[knowledge[i][0]] = knowledge[i][1];
        }

        int p = 0;
        while (p < s.size()) {
            if (s[p] == '(') {
                string key = "";
                int pp = p + 1;
                while (s[pp] != ')') {
                    key += s[pp];
                    pp++;
                }

                if (um.contains(key)) {
                    ans += um[key];                  
                }
                else {
                    ans += '?';
                }
                
                p += key.size() + 1;
            }
            else {
                ans += s[p];
            }
            
            p++;
        }

        return ans;
    }
};