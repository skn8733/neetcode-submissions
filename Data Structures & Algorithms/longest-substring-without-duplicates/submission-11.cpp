class Solution {
/*
"zzzxyz", i = 2, j = 1, []

*/
public:
    int lengthOfLongestSubstring(string s) {
    
        set<int> storedistinct;
        int maxsubstr = 0;
        int j = 0;
        int window = 0;
        for (size_t i = 0; i < s.size(); i++){
            while( storedistinct.count(s[i]) ){
                storedistinct.erase(s[j]);
                j++;
            }
            storedistinct.insert(s[i]);
            window = i - j + 1;
            maxsubstr = max(maxsubstr, window);
        }
        return maxsubstr;
    }

};
