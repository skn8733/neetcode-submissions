class Solution:
    '''
    encode ==> have #(len)#word...
    this way you can get the length and a unique pattern
    '''
    def encode(self, strs: List[str]) -> str:
        encoded_string = ""
        for word in strs:
            n = len(word)
            encoded_string += "#" + str(n) + "#" + word 
        return encoded_string
    
    def decode(self, s: str) -> List[str]:
        strings = []
        counter = 0
        while counter < len(s):
            if s[counter] == "#":
                counter+=1
                digit_str = ""
                while s[counter].isdigit():
                    digit_str += s[counter]
                    counter+=1
                word_length = int(digit_str)
                # I am stuck to see if I am doing this right 
                counter += 1
                strings.append(s[counter:counter + word_length])
                counter += word_length
        return strings

