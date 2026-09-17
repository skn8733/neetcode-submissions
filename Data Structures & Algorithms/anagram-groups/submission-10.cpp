class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map <string, vector<string>> group;
        for (auto& word : strs){
            vector<char> word_loc (26,0);
            string keyHolder = "";
            for (char c : word){
                word_loc[c-'a']++;
            }
            for (auto& count: word_loc){
                keyHolder += to_string(count) + "#";
            }
            group[keyHolder].push_back(word);
        }
        // list out the words 
        vector<vector<string>> output;
        for(auto& g: group){
            output.push_back(g.second);
        }
        return output;
    }
};
