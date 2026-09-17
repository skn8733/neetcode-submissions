class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # Approach #1: going through each element and comparing its iteraction while storing it to a max value
             # Comparing (10,1) ... (10,1), then (1,5) .. (1,1), ...continue like this until (7,1)
             # O(n^2) time complexity as you are iterating through  also note n + (n-1) +  .... + (n-n) ~ n(n-1) /2 ~ O(n^2)
        # Approach #2: 
            # We have two pointers left = 0 position and right = 1 position
                # if left > right: move left = right, then right ++ ( we need no negative value only profit default to 0)
                # else we can have a current max from right - left , compare it max overall, then move right++
                # run time O(n) and space is O(1) ~ constant as left and right are value pointers
        left, right = 0, 1
        max_profit = 0
        while right < len(prices):
            if prices[left] > prices[right]: 
                left = right
            else:
                max_profit = max( prices[right] - prices[left], max_profit) # computing & comparing max
            right += 1 # going to next right
        
        return max_profit
                

        