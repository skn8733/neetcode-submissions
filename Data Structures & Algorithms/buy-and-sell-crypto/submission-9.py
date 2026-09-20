class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # find the lowest day
        buyDay = 0
        maxProfit = 0
        for sellDay in range(1, len(prices)):
            if prices[sellDay] < prices[buyDay]:
                buyDay = sellDay
            else:
                maxProfit = max(maxProfit, prices[sellDay] - prices[buyDay])
        return maxProfit


        


        