class Solution {
    public:
        bool isPalindrome(int x) {
            int arr[100000];
            int cnt = 0;
            if (x < 0) return false;
            while (x) {
                arr[cnt++] = x % 10; 
                x /= 10;
            } 
            for (int i = 0; i <= cnt/2; i++) 
                if (arr[i] != arr[cnt - 1 - i]) return false;
            return true;
        }
};
