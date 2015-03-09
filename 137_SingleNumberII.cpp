//解法一：朴素算法，直接排序，查找不同即可（不过有点搓）
class Solution {
    public:
        int singleNumber(int A[], int n) {
            if (n == 1) return A[0];
            sort(A, A + n);
            int num = 0;
            for (int i = 0; i < n; i += 3) {
                if (A[i] != A[i + 1]) {
                    num = A[i];
                    break;
                }
            }
            return num;
        }
};


//解法二：因为int最多久32位，所以用位运算求出每个位数上出现的次数，模3，可以得到多余的那些位数上为1的，即单个存在的数字
class Solution {
    public:
        int singleNumber(int A[], int n) {
            int b[32];
            memset(b, 0, sizeof(b));
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < 32; j++) {
                    if (A[i]&(1<<j)) b[j]++;
                }
            }
            int ans = 0;
            for (int i = 0; i < 32; i++) {
                if (b[i] % 3 != 0) ans += (1<<i);
            }
            return ans;
        }
};
