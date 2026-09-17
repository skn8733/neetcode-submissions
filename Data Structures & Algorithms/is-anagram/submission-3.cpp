class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        vector<int> match(26,0);
        for(int i = 0; i < s.size(); i++){
            match[s[i] - 'a']++;
            match[t[i] - 'a']--;
        }
        for(auto v: match){
            if (v != 0){
                return false;
            }
        }
        return true;
    }
};
