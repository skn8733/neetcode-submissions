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
            delimiter_idx = s.find("#", i)
            size = int(s[i:delimiter_idx])
            decoded.append(s[delimiter_idx + 1 : delimiter_idx + 1 + size])
            i = delimiter_idx + 1 + size
        return decoded
