class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        '''
        ["act","pots","tops","cat","stop","hat"]
        act ==> act
        pots ==> opst, tops ==> opst
        '''
        group_cont = {}
        for word in strs:
            sorted_word = "".join(sorted(word)) # O(klogk)
            if sorted_word not in group_cont: # check to see if it exists
                group_cont[sorted_word] = []
            group_cont[sorted_word].append(word)
        
        group_anagrams = []

        for _,words in group_cont.items():
            group = []
            for word in words:
                group.append(word)
            group_anagrams.append(group)
 
        return group_anagrams