class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int max_length = 0, current = nums[0], streak =0, i = 0;
        while (i < nums.size()){
            // case when it isn't value + 1 = next value
            if (current != nums[i]){
                current = nums[i];
                streak = 0;
            }
            while(i < nums.size() && nums[i] == current){
                i++;
            }
            streak++;
            current++;
            max_length = max(max_length,streak);
        }
        return max_length;
    }
};
