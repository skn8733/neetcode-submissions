class Solution {
public:
// len(p) <= h 
// note max is anc could be len(p) <= upper <= h
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = 0;
        for(int & val: piles){
            r = max(r, val);
        }
        int output = r;
        while (l <= r){
            int k = (l + r) / 2;
            int totalTime = 0;
            for(int p: piles){
                totalTime += (p+k-1) / k;
            }
            if(totalTime <= h){
                output = k;
                r = k -1;
            } else{
                l = k + 1;
            }
        }
        return output;
    }
};
