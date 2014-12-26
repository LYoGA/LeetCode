class Solution {
    public:
        int findPeakElement(const vector<int> &num) {
            int l = num.size();
            if (num[0] > num[1]) return 0;
            if (num[l - 1] > num[l - 2]) return l - 1;
            for (int i = 1; i < l - 1; i++) 
                if (num[i] > num[i - 1] && num[i] > num[i + 1]) return i;
        }

};

class Solution {
    public:
        int findPeakElement(const vector<int> &num) {
            int l = num.size();
            if (l == 1 || num[0] > num[1]) return 0;
            if (num[l - 1] > num[l - 2]) return l - 1;
            int s = 0, e = l, flag = 0;
            while (e - 1 > s) {
                int mid = s + (e - s) / 2; 
                if ((flag = num[mid] > num[mid - 1]) && num[mid] > num[mid + 1]) return mid;  
                if (flag) s = mid;
                else e = mid;
            }
            return -1;
        }

};
