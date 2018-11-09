class Solution {
    public:
        string addBinary(string a, string b) {
            string c, ans;
            int la = a.length() - 1;
            int lb = b.length() - 1;
            int len = max(la, lb);
            int x, y, tmp = 0;
            while (la >= 0 || lb >= 0) {
                x = y = 0; 
                if (la >= 0) x = a[la--] - '0';
                if (lb >= 0) y = b[lb--] - '0';
                c += ((x + y + tmp) % 2) + '0'; 
                tmp = (x + y + tmp) / 2;
            }
            if (tmp) ans += '1';
            for (int i = c.length() - 1; i >= 0; i--)
                ans += c[i];
            return ans;
        }
}


class Solution {
public:
    string addBinary(string a, string b) {
        int arr[100], brr[100], crr[100];
        memset(arr, 0, sizeof(arr));
        memset(brr, 0, sizeof(brr));
        memset(crr, 0, sizeof(crr));
        int la = a.length();
        int lb = b.length();
        for (int i = 0; i < la; i++)
            arr[i] = (a[la - 1 - i] - '0');
        for (int i = 0; i < lb; i++)
            brr[i] = (b[lb - 1 - i] - '0');
        int len = max(la, lb);
        for (int i = 0; i < len; i++) {
            crr[i] += (arr[i] + brr[i]);
            if (crr[i] > 1) {
                crr[i+1] += 1;
                crr[i] %= 2;
            }
        }
        string ans;
        if (crr[len]) ans += '1';
        for (int i = len - 1; i >= 0; i--)
            ans += (crr[i] + '0');
        return ans;
    }
};


