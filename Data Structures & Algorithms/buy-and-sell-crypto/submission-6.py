class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # find the lowest day
        lowestDay = 0
        while lowestDay < len(prices)-1 and prices[lowestDay] > prices[lowestDay+1]:
            lowestDay +=1
        # bounds lowestday check
        if lowestDay == len(prices) - 1:
            return 0

        max_profit = 0
        right = lowestDay + 1

        while right < len(prices):
            if prices[right] >= prices[lowestDay]:
                max_profit = max(max_profit, prices[right] - prices[lowestDay])
                right += 1
            else:
                lowestDay = right
                right = lowestDay + 1
        return max_profit


        


        