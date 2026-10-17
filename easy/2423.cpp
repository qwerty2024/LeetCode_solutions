class Solution {
public:
    bool equalFrequency(string word) {
        for (int i = 0; i < word.size(); i++) {
            unordered_map<char, int> um;
            for (int j = 0; j < word.size(); j++) {
                if (i != j)
                    um[word[j]]++;
            }

            int s = um.begin()->second;
            //cout << "! " << s << endl;
            bool test = true;
            
            for (const auto& a : um) {
                if (a.second != s) {
                    test = false;
                    break;
                }
            }

            if (test)
                return true;
        }

        return false;
    }
};