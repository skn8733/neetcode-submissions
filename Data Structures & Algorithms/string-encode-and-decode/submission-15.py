class Solution:
    # Hello World =encode=> 4#Hello5#World =decode=> Hello World

    def encode(self, strs: List[str]) -> str:
        encodedString = ""
        for word in strs:
            encodedString += str(len(word)) + "#" + word
        return encodedString

    def decode(self, s: str) -> List[str]:
        decoded = []
        i = 0
        while i < len(s):
            delimiter_idx = s.find("#", i) # finds index of #
            size = int(s[i:delimiter_idx]) # goes form (i=0==> index(#))
            decoded.append(s[delimiter_idx + 1 : delimiter_idx + 1 + size]) # (start of word to end of word)
            i = delimiter_idx + 1 + size # goes from start to size as i ( which is) next word patting
        return decoded
