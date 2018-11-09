class Solution {
    public:
        double pow_m(double x, int n) {
            if (n == 1) return x;
            double a = pow(x, n/2);
            double ans = (a * a);  
            if (n % 2 == 1)  
                ans = ans * x;  
            return ans;
        }
        double pow(double x, int n) {
            if (n == 0) return 1;
            if (n < 0) {
                x = 1.0/x;
                n = abs(n);
            }
            double ans;
            ans = pow_m(x, n);
            return ans;
        }
};
