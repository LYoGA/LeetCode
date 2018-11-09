class Solution {
    public:
        uint32_t reverseBits(uint32_t n) {
            int bit[33], cnt = 0;
            memset(bit, 0, sizeof(bit));
            while (n >= 1) {
                bit[cnt++] = n % 2;
                n /= 2;
            }
            uint32_t ans = 0;
            for (int i = 31; i >= 0; i--) {
                if (bit[i])
                    ans += pow(2, 31-i);
            }
            return ans;
        }
};
