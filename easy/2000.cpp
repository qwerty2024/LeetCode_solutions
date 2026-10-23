class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = 0;
        string tmp = "";
        bool test = false;

        while (i < word.size()) {
            tmp = word[i] + tmp;
            if (word[i] == ch) {
                test = true;
                break;
            }
            i++;
        }

        return test ? tmp + word.substr(i + 1, word.size() - i) : word;
    }
};