class Solution {
    public:
        int reverse(int x) {
            // Start typing your C/C++ solution below
            // DO NOT write int main() function
            int flag = x > 0 ? 1 : -1;
            long long temp = abs(x);
            long long result = 0;
            while (temp) {
                result = result*10 + temp%10;
                temp /= 10;
            }
            if (result > INT_MAX || result < INT_MIN) return 0;
            return flag * (int)result;
        }
};
