class Solution {
public:
    bool isAnagram(string s, string t) {
        int len_s = s.length();
        int len_t = t.length();
        if (len_s != len_t){
            return false;
        }

        unordered_map<char, int> freqCount;
        for(int i = 0; i < len_s; i++){
            freqCount[s[i]]+=1;
            freqCount[t[i]]-= 1;
        }
        for(auto& val: freqCount){
            if (val.second != 0){
                return false;
            }
        }
        return true;
    }
};
