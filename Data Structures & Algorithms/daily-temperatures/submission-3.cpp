class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result = vector<int>(temperatures.size(),0);
        stack<pair<int,int>> st;
        for(int r = 0; r < temperatures.size(); r++){
            while ((!st.empty()) && temperatures[r] > st.top().first){
                result[st.top().second] = r - st.top().second;
                st.pop();
            }
            st.push({temperatures[r], r});
        }
        return result;
    }
};
