class Solution {
    bool test(string& str, char x) {
        for (auto& a : str) {
            if (a == x)
                return true;
        }

        return false;
    }

public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for (int i = 0; i < words.size(); i++) {
            if (test(words[i], x))
                ans.push_back(i);
        }

        return ans;
    }
};