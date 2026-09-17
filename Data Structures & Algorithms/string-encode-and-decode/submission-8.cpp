class Solution {
public:

    string encode(vector<string>& strs) {
        string encoding = "";
        for(string word: strs){
            encoding +=  to_string(word.size()) + "#" + word;
        }
        return encoding;
    }
    vector<string> decode(string s) {
        vector<string> words;
        int left = 0;
        int stopValue = 0;
        int length = 0;
        string word = "";
        while(left < s.size()){
            stopValue = left;
            while(s[stopValue] != '#'){
                stopValue++;
            }
            length = stoi(s.substr(left, stopValue - left));
            stopValue++;
            word = s.substr(stopValue, length);
            words.push_back(word);
            // move index forward
            left = stopValue + length;
        }
        return words;
    }
};
