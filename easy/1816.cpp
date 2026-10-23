class Solution {
public:
    string truncateSentence(string s, int k) {
        int i = 0;

        while (k > 0) {
            while (i < s.size() && s[i] != ' ') {
                i++;
            }
            i++;
            k--;
        }
        i--;
        
        return s.substr(0, i);
    }
};