class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char,int> anagramChecker;
        for(int i = 0; i < s.size(); i++){
            anagramChecker[s[i]]++;
            anagramChecker[t[i]]--;
        }
        for(auto& keyVal: anagramChecker){
            if(keyVal.second != 0) return false;
        }
        return true;
    }
};
