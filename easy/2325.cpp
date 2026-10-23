class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans = "";
        unordered_map<char, int> um;
        int counter = 0;

        for (int i = 0; i < key.size(); i++) {
            if (key[i] != ' ' && !um.contains(key[i])) {
                um[key[i]] = counter;
                counter++;
            }
        }

        for (int i = 0; i < message.size(); i++) {
            if (message[i] == ' ') {
                ans += ' ';
            }
            else {
                ans += um[message[i]] + 'a';
            }
        }

        return ans;
    }
};