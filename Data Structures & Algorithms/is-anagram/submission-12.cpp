class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charCount;
        for(auto& chr: s){
            charCount[chr] += 1;
        }
        for(auto& chr: t){
            charCount[chr] -= 1;
        }

        for(auto& pair: charCount){
            if (pair.second >= 1 || pair.second < 0){
                return false;
            }
        }
        return true;
    }
};
