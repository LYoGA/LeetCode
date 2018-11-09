class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[') 
                    st.push(s[i]);
                else {
                    char ch = 'a';
                    if (!st.empty())
                        ch = st.top();
                    if (s[i] == ')') {
                        if (ch != '(') return false;
                        else st.pop();
                    }
                    else if (s[i] == '}') {
                        if (ch != '{') return false;
                        else st.pop();
                    }
                    else if (s[i] == ']') {
                        if (ch != '[') return false;
                        else st.pop();
                    }
                }
            }
            if (st.empty()) return true;
            else return false;
        }
};
