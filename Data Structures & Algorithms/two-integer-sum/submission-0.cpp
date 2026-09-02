class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        unordered_map<int, int> m;
        for(int i=0;i<nums.size();i++){
            int comp = target - nums[i];
            if(m.find(comp) != m.end()){
                res[0] = m[comp];
                res[1] = i;
                return res;
            }
            m[nums[i]] = i;
        }
        return res;
    }
};
