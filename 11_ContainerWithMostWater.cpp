class Solution {
    public:
        int maxArea(vector<int> &height) {
            int l = height.size();
            int left = 0;
            int right = l - 1;
            int Max = 0;
            while (left < right) {
                int tmp = min(height[left], height[right]) * (right - left);
                Max = max(Max, tmp);
                if (height[left] < height[right]) left++;
                else right--;
            }
            return Max;
        }
};
