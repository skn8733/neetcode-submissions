class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groupAna = [] # grouped anagram
        storeAna = defaultdict(list) # list to store anagrams to groups 
        for word in strs:
            count = [0] * 26
            for ch in word:
                count[ord(ch) - ord('a')] += 1
            # get the key as a string
            storeAna[tuple(count)].append(word)
            
        # adding list to group
        for _, values in storeAna.items():
            groupAna.append(values)
        return groupAna
        
        