class Solution {
public:
    bool isPalindrome(string s) {
        
     std::string cleanedString;
        for (char c : s) {
            if (std::isalnum(c)) {
                cleanedString += std::tolower(c);
            }
        }

        // Check if the cleaned string is a palindrome
        int left = 0;
        int right = cleanedString.length() - 1;
        while (left < right) {
            if (cleanedString[left] != cleanedString[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

 };
