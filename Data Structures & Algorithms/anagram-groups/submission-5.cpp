class Solution {
public:
    // The direct approach I have is [0..0] 26
    // then while going through each word, populate the vector += 1
    // then with those outputs, iterate again but -- the values that form a group
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> holderWords;
        for(auto& word: strs){
            string sortw = word;
            sort(sortw.begin(),sortw.end());
            holderWords[sortw].push_back(word);
        }
        vector<vector<string>> output;
        for(auto& key: holderWords){
            output.push_back(key.second);
        }
        return output;
    }
};
