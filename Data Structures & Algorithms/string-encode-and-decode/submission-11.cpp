class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(auto& word: strs){
            encoded_string += to_string(word.length()) + "#" + word;
        }
        return encoded_string;
        
    }
    vector<string> decode(string s) {
        vector<string> words;
        int i = 0; 
        int n = s.length();
        while(i < n){
            int l = i;
            string digit_string = "";
            while(isdigit(s[l])){
                digit_string += s[l];
                l++;
            }
            int digit = stoi(digit_string);
            i = l+1; // moved to where # is located, and skip it
            words.push_back(s.substr(i,digit));
            i = i + digit;
        }
        return words;
       
    }
};
