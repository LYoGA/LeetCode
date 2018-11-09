class Solution {
    public:
        string longestCommonPrefix(vector<string> &strs) {
            if (strs.size() == 0) return "";
            string ans;
            int len = strs[0].length(), l;
            for (int i = 1; i < strs.size(); i++) {
                l = strs[i].length();
                len = min(len, l); 
            }
            int flag = 1;
            for (int i = 0; i < len; i++) { 
                char ch = strs[0][i];
                for (int j = 1; j < strs.size(); j++) {
                    if (ch != strs[j][i]) {
                        flag = 0; 
                        break;
                    } 
                }
                if (flag) ans += ch;
                else break;
            }
            return ans;
        }
};
