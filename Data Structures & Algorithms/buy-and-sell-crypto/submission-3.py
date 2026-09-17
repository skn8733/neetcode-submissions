class Solution:
    '''
    [10,1,5,6,7,1]
        cur   top

    '''
    def maxProfit(self, prices: List[int]) -> int:
        b = prices[0]
        profit = 0
        for i in range(1, len(prices)):
            diff = prices[i] - b
            if b > prices[i]:
                b = prices[i]
            elif diff > profit:
                profit = diff
        return profit
                

        