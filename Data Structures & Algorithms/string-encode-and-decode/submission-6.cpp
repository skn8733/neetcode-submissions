class Solution {
public:

    string encode(vector<string>& strs) {
        string output = "";
        for(auto s: strs){
            output += to_string(s.size()) + "#" + s;
        }
        return output;
    }
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int len = stoi(s.substr(i,j-i)); // ss in c++ (index, length from index)
            string w = s.substr(j+1, len);
            res.push_back(w);
            i = j + 1 + len;
        }
        return res;
    }
};
