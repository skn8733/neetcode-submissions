class Solution {
public:
//  n = 2 ==> [0,1,2]  meaning 
//  n = 3 ==> [0,1,2,3] meaning
// always be 1 way bey default
    int climbStairs(int n) {
        return dfs(n,0);
    }
    int dfs(int n, int i){
        if (i >= n) return i==n;
        return dfs(n,i+1) + dfs(n, i+2);
    }
};
