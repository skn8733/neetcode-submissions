class Solution {
public:
    string minWindow(string s, string t) {
        if ((t == "") || (s.size() < t.size())){
            return "";
        }
        int n = s.size(), m = t.size();
        // storage for t freq and empty 
        unordered_map<char,int> freqT;
        unordered_map<char,int> window;
        for(int value: t){
            freqT[value]++;
        }
        // defining constants
        int need = freqT.size(), have = 0;
        int minWindowLen = numeric_limits<int>::max();
        pair<int,int> bounds;
        int l = 0;
        char ch;
        int currentWindow = 0;

        for(int r = 0; r < s.size(); r++){
            ch = s[r];
            window[ch]++;
            if((freqT.find(ch) != freqT.end()) && (freqT[ch] == window[ch])){
                have++;
            }
            while(have == need){
                currentWindow = r - l + 1;
                if (currentWindow < minWindowLen){
                    bounds.first = l;
                    bounds.second = r;
                    minWindowLen = currentWindow;
                }
                window[s[l]]--;
                if((freqT.find(s[l]) != freqT.end()) && (freqT[s[l]] > window[s[l]])){
                    have--;
                }
                l++;
            }
        }
        if(minWindowLen == numeric_limits<int>::max()){
            return "";
        }
        int steps = bounds.second - bounds.first + 1;
        string output = s.substr(bounds.first, steps);
        return output;
    }
};
