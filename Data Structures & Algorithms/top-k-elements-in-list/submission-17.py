class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        '''
        [1,2,2,3,3,3] ==> [(1,1), (2,2), (3,3)]
        '''
        freq_nums = Counter(nums)
        print(freq_nums)
        pq = []
        for num,fre in freq_nums.items():
            heapq.heappush(pq,(fre,num))
            if len(pq) > k:
                heapq.heappop(pq)
        print(pq)
        top_k = []
        for i in range(k):
            top_k.append(heapq.heappop(pq)[1])
        return top_k
        

        