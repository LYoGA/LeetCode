class MinStack {
    public:
        stack<int> st;
        stack<int> tmp;
        void push(int x) {
            st.push(x);
            if (tmp.empty() == true || tmp.top() >= x) tmp.push(x);
        }
        void pop() {
            int temp = st.top();
            st.pop(); 
            if (temp <= tmp.top()) tmp.pop();
        }
        int top() {
            return st.top();
        }
        int getMin() {
            return tmp.top();
        }
};
