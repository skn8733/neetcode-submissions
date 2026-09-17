class Solution {
public:
    // approach
    // have a map where key is uniqueID matches for the characters
    // note try to make it general not just vector<int>(26,0)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groupStorage;
    	string keyHolder = "";
    	for(auto& word: strs){
    		map<char, int> freqWord;
            keyHolder = "";
    		for(char&c: word){
    			freqWord[c]++;
    		}
    		// seralize the info
    		for(auto& keyValue: freqWord){
    			keyHolder += keyValue.first;
    			keyHolder += "#";
    			keyHolder += to_string(keyValue.second);
    			keyHolder += "|";
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
