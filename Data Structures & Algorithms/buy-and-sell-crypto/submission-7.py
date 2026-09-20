class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # find the lowest day
        l, max_profit = 0, 0
        for r in range(1, len(prices)):
            if prices[r] < prices[l]:
                l = r
            else:
                max_profit = max(max_profit, prices[r] - prices[l])
        return max_profit


        


        