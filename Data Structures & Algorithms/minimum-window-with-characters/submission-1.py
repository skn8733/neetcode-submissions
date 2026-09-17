class Solution:
    # Approach #1: s = "OUZODYXAZV", t = "XYZ"
    '''
    have= [X:0, Y: 0, Z: 0], need = [X:1, Y: 1, Z: 1]
    "OUZODYXAZV" ==> O in t, nope, 

    runtime is O(n^2 *m) and space is O(m)

    Approach #2: Sliding window with have and need metrics
    '''
    def minWindow(self, s: str, t: str) -> str:
        m = len(t)
        n = len(s)
        # edge cases
        if m == 0 or m > n:
            return ""
        # defined initial
        countT = Counter(t)
        tempSubstr = {}

        have, need = 0, len(countT)

        bound = [-1,-1]
        minsubs = float("inf")

        l = 0
        
        for r in range(n):
            # adding occurance to window for chars in s[r] one by one
            c = s[r]
            tempSubstr[c] = 1 + tempSubstr.get(c,0)

            # checking if it meets 1 have 
            if c in countT and tempSubstr[c] == countT[c]:
                have += 1
            # considition of when have == need, we got a valid substring
            while have == need:
                if (r - l + 1) < minsubs:
                    bound = [l,r]
                    minsubs = r - l + 1
                
                tempSubstr[s[l]] -= 1
                if s[l] in countT and tempSubstr[s[l]] < countT[s[l]]:
                    have -= 1
                l += 1 

        if minsubs == float("inf"):
            return ""
        return s[bound[0]:bound[1] + 1]
            

                
                
        
        




            
        


        



                


        