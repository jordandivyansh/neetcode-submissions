class Solution {
public:
    bool isPalindrome(string s) {
        int end = s.size();
        if(end == 1)
            return true;
        int start = 0;
        end--;
        while(start < end){
            while(!isalnum(s[start]))
                start++;
            while(!isalnum(s[end]))
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
