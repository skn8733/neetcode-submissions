class Solution:
    '''
    nums ==> freqCount
    '''
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freqCount = Counter(nums)
        topk = []
        for num, freq in freqCount.items():
            heapq.heappush(topk,(freq,num))
            if len(topk) > k: # removes top min
                heapq.heappop(topk) # takes the min value out 
        output = []
        for i in range(k):
            output.append(heapq.heappop(topk)[1])
        return output

        