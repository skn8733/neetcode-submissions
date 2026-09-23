class Solution:
    def isValid(self, s: str) -> bool:
        mp = {')':'(', '}':'{', ']':'['}
        stack = []
        for ch in s:
            if ch in mp and stack and  mp[ch] == stack[-1]:
                stack.pop()
            elif ch in mp and stack and mp[ch] != stack[-1]:
                return False
            else:
                stack.append(ch)
        if stack:
            return False
        return True
        
            
            
        