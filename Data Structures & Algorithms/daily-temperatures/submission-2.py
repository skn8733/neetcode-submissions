class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        # Approach #1: runtime is O(n^2) and space is O(n)
        result = [0]*len(temperatures)
        stack = []
        for r in range(len(temperatures)):
            while stack and stack[-1][0] < temperatures[r]:
                result[stack[-1][1]] = r - stack[-1][1]
                stack.pop()
            stack.append([temperatures[r],r]) 
        return result
        