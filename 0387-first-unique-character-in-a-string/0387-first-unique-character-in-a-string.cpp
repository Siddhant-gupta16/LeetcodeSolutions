class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.length(); i++) {
            int c = 0; 
            for (int j = 0; j < s.length(); j++) {
                if (i != j && s[i] == s[j]) {
                    c++;
                    break;  
                }
            }
            
            if (c == 0) {
                return i;  
            }
        }
        return -1;  
    }
};
