class Solution {
public:
    vector<vector<int>> res;
    void solve(int idx, int n, vector<int> &ds, vector<int> &nums){
        if(idx >= n){
            res.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        solve(idx+1, n, ds, nums);
        ds.pop_back();
        solve(idx+1, n, ds, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ds;
        int n = nums.size();
        solve(0, n, ds, nums);
        return res;    
    }
};
