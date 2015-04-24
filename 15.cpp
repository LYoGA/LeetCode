class Solution {
    public:
        vector<vector<int> > threeSum(vector<int> &num) {
            sort(num.begin(), num.end());
            vector<vector<int> > ans;
            ans.clear();
            vector<int> tmp;
            tmp.clear();
            if (num.size() < 3) return ans;

            for (int i = 0; i < num.size(); i++) {
                if (i > 0 && num[i] == num[i-1]) continue;//去重

                int target = -num[i];
                int s = i + 1; 
                int e = num.size()-1;
                while (s < e) {
                    if (s > i+1 && num[s] == num[s-1]) {
                        s++; 
                        continue;
                    }//去重
                    if (e < num.size()-1 && num[e] == num[e+1]) {
                        e--; 
                        continue;
                    }//去重
                    int sum = num[s] + num[e];
                    if (sum < target) s++;
                    else if (sum > target) e--;
                    else {
                        tmp.clear();
                        tmp.push_back(num[i]); 
                        tmp.push_back(num[s]); 
                        tmp.push_back(num[e]); 
                        ans.push_back(tmp);
                        s++;
                    } 
                }  
            }
            return ans;
        }
};
