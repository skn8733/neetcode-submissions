class Solution:
    
    def encode(self, strs: List[str]) -> str:
        single_string = ""
        for word in strs:
            single_string += word + ";"
        return single_string
    
    def decode(self, s: str) -> List[str]:
        output = []
        word = ""
        for i in range(1,len(s) + 1):
            if s[i-1] != ";" and s[i] != ":":
                word += s[i-1]
            else:
                output.append(word)
                word = ""
        return output

