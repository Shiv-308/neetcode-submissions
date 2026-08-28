class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2, -1);
        int l = 0, r = numbers.size() - 1;
        while(l < r){
            long long sum = 1LL * numbers[l] + numbers[r];
            if(sum == target){
                res[0] = l+1;
                res[1] = r+1;
                return res;
            }
            else if(sum < target){
                l++;
            }
            else{
                r--;
            }
        }
        return res;
    }
};
