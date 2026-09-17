class Solution:
    # Approach #1: s = "OUZODYXAZV", t = "XYZ"
    '''
    have= [X:0, Y: 0, Z: 0], need = [X:1, Y: 1, Z: 1]
    "OUZODYXAZV" ==> O in t, nope, 

    runtime is O(n^2 *m) and space is O(m)
    '''
    def minWindow(self, s: str, t: str) -> str:
        m = len(t)
        n = len(s)
        # edge cases
        if m == 0 or m > n:
            return ""
        # defined initial
        need = Counter(t)
        bound = [-1,-1]
        minsubs = float("inf")
        
        for r in range(n):
            tempSubstr = Counter()
            for l in range(r,n):
                tempSubstr[s[l]] = 1 + tempSubstr.get(s[l],0)
                flag = True
                for val in need:
                    if need[val] > tempSubstr.get(val,0):
                        flag = False
                        break
                if flag and (l -r + 1) < minsubs:
                    minsubs = l -r + 1
                    bound = [r,l]
        
        if minsubs == float("inf"):
            return ""
        return s[bound[0]:bound[1] + 1]
            

                
                
        
        




            
        


        



                


        