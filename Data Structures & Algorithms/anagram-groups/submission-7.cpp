class Solution {
public:
    // approach
    // have a map where key is uniqueID matches for the characters
    // note try to make it general not just vector<int>(26,0)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupStorage;
        
        string keyHolder = "";
        for(auto& word: strs){
            vector<int> holder(26,0);
            keyHolder = "";
            for(char& c: word){
                holder[c-'a']++;
            }
            for(int count: holder){
                keyHolder += to_string(count) + "#";
            }
            groupStorage[keyHolder].push_back(word);
        }
        vector<vector<string>> output;
        for(auto&key: groupStorage){
            output.push_back(key.second);
        }
        return output;
    }
};
