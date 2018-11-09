class Solution {
    public:
        int strStr(char *haystack, char *needle) {
            int l = strlen(haystack);
            int ls = strlen(needle);
            if (!l && !ls) return 0;
            string s, sub;
            for (int i = 0; i < l; i++) s += haystack[i];
            for (int i = 0; i < ls; i++) sub += needle[i];
            int p = -1;
            for (int i = 0; i < l; i++) {
                string tmp = s.substr(i, ls);
                if (tmp == needle) {
                    p = i;
                    break;
                } 
            }
            return p;
        }
};
