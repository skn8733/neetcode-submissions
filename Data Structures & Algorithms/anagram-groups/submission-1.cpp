class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> group_ana;
        unordered_map<string,vector<string>> freq_wordCount;

        for (auto& s: strs){
            vector<int> freq_char(26,0);
            for (char c: s){
                freq_char[c - 'a']++;
            }
            string key = "";
            for (int ch: freq_char){
                key += to_string(ch) + "&";
            }
            freq_wordCount[key].push_back(s);
        }

        for(auto val: freq_wordCount){
            group_ana.push_back(val.second);
        }
        return group_ana;    
    }
};
