class Solution {
    vector<string> ans;
    int count_open = 1;
    int count_close = 0;
    int lenght = 1;

    void go(string& str) {
        if (str.size() > lenght)
            return;

        if (str.size() == lenght && count_open == count_close)
        {
            ans.push_back(str);
            return;
        }

        if (count_open > count_close) {
            count_close++;
            str += ')';
            go(str);
            str.pop_back();
            count_close--;
        }

        count_open++;
        str += '(';
        go(str);
        str.pop_back();
        count_open--;
    }

public:
    vector<string> generateParenthesis(int n) {
        lenght = n * 2;
        string str = "(";

        go(str);

        return ans;
    }
};