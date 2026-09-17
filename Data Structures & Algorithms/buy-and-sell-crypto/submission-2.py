class Solution:
    '''
    [10,1,5,6,7,1]
        cur   top

    '''
    def maxProfit(self, prices: List[int]) -> int:
        maxOutput = 0
        cur = 0
        while cur < len(prices):
            j = cur + 1
            while j  < len(prices) and prices[cur] < prices[j]:
                maxOutput = max(maxOutput, prices[j] - prices[cur])
                j+=1
            cur += 1
        
        return maxOutput
                

        