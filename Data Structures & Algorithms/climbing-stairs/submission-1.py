class Solution:
    # Approach #3: Dynamic Programming problem
    # Start with base case where n = 5 then go up from Bottom Up
    # using [1,1,2,3,5,8]
    def climbStairs(self, n: int) -> int:
        one,two = 1, 1 #  one = 2, two = 1, temp = 1
        for i in range(n-1):
            temp = one
            one = one + two
            two = temp
        return one




        
        