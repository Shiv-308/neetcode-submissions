class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int res = 0;
        unordered_map<char, int> m;
        for(int r=0;r<s.size();r++){
            if(m.find(s[r]) != m.end()){
                while(m.count(s[r])){
                    m[s[l]]--;
                    if(m[s[l]] == 0){
                        m.erase(s[l]);
                    }
                    l++;
                }
            }
            m[s[r]]++;
            res = max(res, r - l + 1);
        }
        return res;
    }
};
