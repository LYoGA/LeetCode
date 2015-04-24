class Solution {
    public:
        int change(string s) {
            int tmp = 0;
            if (s[0] == '-') {
                for (int i = 1; i < s.size(); i++) {
                    tmp = tmp * 10 + (s[i] - '0'); 
                }
                return -tmp;
            } else {
                for (int i = 0; i < s.size(); i++) {
                    tmp = tmp * 10 + (s[i] - '0');  
                }
                return tmp;
            }

        }
        int evalRPN(vector<string> &tokens) {
            stack<int> num;
            int a, b;
            for (int i = 0; i < tokens.size(); i++) {
                for (int j = 0; j < tokens[i].size(); j++) {   
                    if (isdigit(tokens[i][j])) {
                        int v = change(tokens[i]); 
                        num.push(v);
                        break;
                    }
                }
                if (tokens[i] == "+") {
                    a = num.top();
                    num.pop();
                    b = num.top();
                    num.pop();
                    num.push(a+b);

                } else if (tokens[i] == "-") {
                    a = num.top();
                    num.pop();
                    b = num.top();
                    num.pop();
                    num.push(b-a);

                } else if (tokens[i] == "*") {
                    a = num.top();
                    num.pop();
                    b = num.top();
                    num.pop();
                    num.push(a*b);

                } else if (tokens[i] == "/") {
                    a = num.top();
                    num.pop();
                    b = num.top();
                    num.pop();
                    num.push(b/a);
                }  
            }
            int ans = num.top();
            return ans;
        }
};
