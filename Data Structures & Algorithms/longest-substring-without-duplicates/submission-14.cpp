class Solution {

/*
"zzzyz" => [z:2, y:3], max = 1,1,2 ; l = 2
*/
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int l = 0, maxValue = 0;
        int window = 0;
        for(size_t r = 0; r < s.size(); r++){
            if(mp.find(s[r]) != mp.end()){
                l = max(mp[s[r]] + 1, l);
            }
            mp[s[r]] = r;
            window = r - l + 1;
            maxValue = max(maxValue, window);
        }
        return maxValue;
    }

};
