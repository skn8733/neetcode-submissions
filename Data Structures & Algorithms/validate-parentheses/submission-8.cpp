class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> freqParan = {
            {')','('}, {'}','{'}, {']','['}
            };
        stack<char> st;
        for(char val: s){
            if((freqParan.find(val) != freqParan.end())){
                if((!st.empty()) &&(freqParan[val] == st.top())) st.pop();
                else return false;
            } else st.push(val);
        }
        if (!st.empty() ) return false;
        return true;
    }
};
