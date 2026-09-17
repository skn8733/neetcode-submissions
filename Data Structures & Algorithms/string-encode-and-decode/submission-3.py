class Solution:
    
    def encode(self, strs: List[str]) -> str:
        single_string = ""
        for word in strs:
            single_string += str(len(word)) + "#" + word
        return single_string
    
    def decode(self, s: str) -> List[str]:
        output = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != "#": # finding until pound for number
                j += 1
            length = int(s[i:j]) # length of word
            output.append(s[j+1: j+length+1])
            i = j+length+1
        return output

