class Solution {
public:
    vector<vector<int>> output;
    void path_explore(vector<int>& input,int index, vector<int>& list){
        // record current sub
        output.push_back(input);
        // explore further subsets by including elements (1 by 1)
        for(int i = index; i < list.size();i++){
            input.push_back(list[i]);
            path_explore(input,i+1,list);
            input.pop_back(); 
        }

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> path;
        path_explore(path,0,nums);
        return output;

    }
};
