class Solution {
public:
    bool isPalindrome(string s) {
        char temp1;
        char temp2;
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            // non alpabetric ascii chars
            while(left < right && !isalnum(s[left])){
                left++;
            }
            while(left < right && !isalnum(s[right])){
                right--;
            }

            temp1 = tolower(static_cast<unsigned char>(s[left]));
            temp2 = tolower(static_cast<unsigned char>(s[right]));
            if (temp1 != temp2){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
