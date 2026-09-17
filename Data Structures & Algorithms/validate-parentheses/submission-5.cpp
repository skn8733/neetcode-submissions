class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> freqParan = {
            {')','('}, {'}','{'}, {']','['}
            };
        stack<char> st;
        for(char val: s){
            if((!st.empty()) && (freqParan.find(val) != freqParan.end()) && (freqParan[val] == st.top())){
                st.pop();
            }
            else if ((!st.empty()) && (freqParan.find(val) != freqParan.end()) && (freqParan[val] != st.top())){
                return false;
            }
            else {
                st.push(val);
            }
        }
        if (!st.empty() ){
            return false;
        }
        return true;
    }
};
