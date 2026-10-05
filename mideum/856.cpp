class Solution {
    int precedence(char op) {
        if (op == '+') return 1;
        else if (op == '*') return 2;
        return 0;
    }

    int applyOp(int a, int b, char op) {
        switch (op) {
            case '+': return a + b;
            case '*': return a * b;
        }
        return 0;
    }

    int my_counter(const string& s) {
        stack<char> op;
        stack<int> num;

        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0' || s[i] == '1' || s[i] == '2') {
                num.push(s[i] - '0');
            }
            else if (s[i] == '(') {
                op.push('(');
            }
            else if (s[i] == ')') {
                while (!op.empty() && op.top() != '(') {
                    int val1 = num.top();
                    num.pop();
                    int val2 = num.top();
                    num.pop();
                    char opp = op.top(); 
                    op.pop();
                    num.push(applyOp(val1, val2, opp));
                }
                if (!op.empty()) op.pop();
            }
            else {
                while (!op.empty() && precedence(op.top()) >= precedence(s[i])) {
                    int val1 = num.top();
                    num.pop();
                    int val2 = num.top();
                    num.pop();
                    char opp = op.top(); 
                    op.pop();
                    num.push(applyOp(val1, val2, opp));
                }
                op.push(s[i]);
            }
        }

        while (!op.empty()) {
            int val1 = num.top();
            num.pop();
            int val2 = num.top();
            num.pop();
            char opp = op.top(); 
            op.pop();
            num.push(applyOp(val1, val2, opp));
        }

        return num.top();
    }

public:
    int scoreOfParentheses(string s) {
        string tmp = "";
        for (int i = 1; i <= s.size(); i++) {
            if (s[i - 1] == ')' && s[i] == '(') {
                tmp += s[i - 1];
                tmp += '+';
            }
            else
                tmp += s[i - 1];
        }

        string tmp1 = "";
        for (int i = 1; i <= tmp.size(); i++) {
            if (tmp[i - 1] == '(' && tmp[i] == ')') {
                tmp1 += "1+0";
                i++;
            }
            else
                tmp1 += tmp[i - 1];
        }

        tmp = "";
        for (int i = 0; i <= tmp1.size(); i++) {
            tmp += tmp1[i];
            if (tmp1[i] == ')') {
                tmp += "*2";                
            }
        }

        cout << tmp;


        return my_counter(tmp);
    }
};