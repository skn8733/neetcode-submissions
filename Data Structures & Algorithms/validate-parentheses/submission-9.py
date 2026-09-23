class Solution:
    def isValid(self, s: str) -> bool:
        valid = {')':'(', '}':'{', ']':'['}
        stack = []
        for ch in s:
            if len(stack) == 0 or ch not in valid:
                stack.append(ch)
            elif stack[-1] == valid[ch] and len(stack) > 0:
                stack.pop()
            elif stack[-1] != valid[ch] and len(stack) > 0:
                return False
            else:
                break
        
        if len(stack) == 0:
            return True
        return False
        
            
            
        