class Solution {
public:
// A..B...C...Z note you need a window that allows for k rotations to happen
// if it goes beyond, then you need to change window 
// left ==> maxFreq ==> left to flip ==> right 
    int characterReplacement(string s, int k) {
        vector<int> count(26,0);
        int left = 0;
        int maxFreq = 0;
        int window = 0;
        for(int r = 0; r < s.size(); r++){
            count[s[r] - 'A']++;
            maxFreq = max(maxFreq, count[s[r]-'A']);
            while((r - left + 1) - maxFreq > k) { // slide window if the window reached max
                count[s[left] -'A']--;
                left++;
            }
            window = max(window, r - left + 1);
        }
        return window;
    }
};
