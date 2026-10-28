class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26, false);

        for (const auto& a : sentence) {
            seen[a - 'a'] = true;
        }

        return find(seen.begin(), seen.end(), false) == seen.end() ? true : false;
    }
};