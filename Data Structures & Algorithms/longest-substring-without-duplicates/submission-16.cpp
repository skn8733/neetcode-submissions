class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> mp;
       int left = 0, max_len = 0;
       for (int r = 0; r < s.size(); r++){
        if(mp.find(s[r]) != mp.end()){
            left = max(mp[s[r]] + 1, left);
        }
        mp[s[r]] = r;
        max_len = max(max_len, r - left + 1);
       }
       return max_len;
    }

};
