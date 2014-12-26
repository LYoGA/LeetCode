class Solution {
    public:
        bool isPalindrome(string s) {
            string tmp;
            if (s.empty() == true) return true;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == ' ') continue; 
                if (isalnum(s[i])) {
                    if (isupper(s[i])) {
                        tmp += (s[i] + 32); 
                    }                
                    else
                        tmp += s[i];
                }  
            }   
            int l = tmp.size();
            for (int i = 0; i <= l / 2; i++) {
                if (tmp[i] != tmp[l - 1 - i]) return false;
            }
            return true;
        }
};
