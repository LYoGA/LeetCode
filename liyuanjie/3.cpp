class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            if (s == NULL) return 0;
            int pos[256];
            int l = s.size(); 
            int index = -1, Max = 0;
            memset(pos, -1, sizeof(pos));
            for (int i = 0; i < l; i++) {
                if (pos[s[i]] > index) {
                    index = pos[s[i]]; 
                } 
                pos[s[i]] = i;
                if (i - index > Max) {
                    Max = i - idx; 
                }
            } 
            return Max;
        }
};
