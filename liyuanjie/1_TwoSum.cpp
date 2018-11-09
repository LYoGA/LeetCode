class Solution {
    public:
        vector<int> twoSum(vector<int> &numbers, int target) {
            map<int, int> Hash;
            map<int, int> ::iterator tmp;
            vector<int> ans;
            int l = numbers.size();
            for (int i = 0; i < l; i++) Hash[numbers[i]] = i;
            for (int i = 0; i < l; i++) {
                int fNum = target - numbers[i];
                tmp = Hash.find(fNum);
                if (tmp != Hash.end() && tmp->second != i) {
                    if (i < tmp->second) {
                        ans.push_back(i + 1); 
                        ans.push_back(tmp->second + 1);
                    }
                    else {
                        ans.push_back(tmp->second + 1);
                        ans.push_back(i + 1);  
                    }
                    return ans;
                }  
            }      
        }
};
