class Solution {
public:
    bool isPalindrome(string s) {
        int end = s.size()-1;
        int start = 0;
        while(start < end){
            while(start<end && !isalnum(s[start]))
                start++;
            while(start<end && !isalnum(s[end]))
                end--;
            char charL = s[start];
            char charR = s[end];
            charL = tolower(charL);
            charR = tolower(charR);
            if(charL != charR)
                return false;
            start++;
            end--;
        }
        return true;
    }
};
