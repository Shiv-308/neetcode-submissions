class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pairs;
        for(int i=0;i<speed.size();i++){
            pairs.push_back({position[i], speed[i]});
        }
        int fleet = 0;
        sort(pairs.rbegin(), pairs.rend());
        double prevtime = double(target - pairs[0].first)/pairs[0].second;
        for(int i=1;i<pairs.size();i++){
            double currTime = double(target - pairs[i].first)/pairs[i].second;
            if(currTime > prevtime){
                fleet++;
                prevtime = currTime;
            }
        }
        return fleet + 1;
    }
};