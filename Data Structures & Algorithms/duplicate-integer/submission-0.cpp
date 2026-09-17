class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for (auto val: nums){
            if(map.find(val) != map.end()){
                map[val]++;
            } else{
                map[val] = 1;
            }
        }
        for (const auto& pair: map){
            if(pair.second > 1){
                return true;
            }
        }
        return false;
    }
};