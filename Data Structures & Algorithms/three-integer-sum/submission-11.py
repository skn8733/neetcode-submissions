class Solution:
    '''
    [-1,0,1,2,-1,-4]
    Sol1 :i [0,n-3], j[1:n-2], z[2:n-1] i+j+z==0 ( add) ==> O(n^3)
    Sol2: sort then n[i]+n[j]+n[k], -n[i] == n[j] + n[k]

    '''
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        result = []
        for i in range(n-2):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            target = -nums[i]
            l = i +1
            r = n -1
            while l < r:
                if nums[r] + nums[l] > target:
                    r-= 1
                elif nums[r] + nums[l] < target:
                    l+=1
                else:
                    result.append([nums[i], nums[l], nums[r]])
                    l+=1
                    r-=1
                    while l < r and nums[l] == nums[l-1]:
                        l+=1
        return result
            
            
                



        