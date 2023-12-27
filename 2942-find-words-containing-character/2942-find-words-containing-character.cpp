#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> result;

        for (int i = 0; i < words.size(); ++i) {
            if (containsCharacter(words[i], x)) {
                result.push_back(i);
            }
        }

        return result;
    }

private:
    bool containsCharacter(const std::string& word, char x) {
        // Check if the given word contains the character x
        for (char ch : word) {
            if (ch == x) {
                return true;
            }
        }
        return false;
    }
};
