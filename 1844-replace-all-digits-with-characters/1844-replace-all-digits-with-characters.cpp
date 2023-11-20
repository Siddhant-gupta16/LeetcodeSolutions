class Solution {
public:
    char shift(char c, int x) {
        return static_cast<char>((c - 'a' + x) % 26 + 'a');
    }

    string replaceDigits(string s) {
        for (int i = 1; i < s.length(); i += 2) {
            s[i] = shift(s[i - 1], s[i] - '0');
        }
        return s;
    }
};