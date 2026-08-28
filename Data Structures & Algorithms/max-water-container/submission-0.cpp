class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int res = INT_MIN;
        while(l < r){
            int curr = min(heights[l], heights[r]) * (r-l);
            res = max(res, curr);
            if(heights[l] <= heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};
