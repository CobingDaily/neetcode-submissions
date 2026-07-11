class Solution {
public:
    bool isPalindrome(string s) {
        auto left = s.begin();
        auto right = s.end() - 1;

        while (left < right) {
            if (!std::isalnum(static_cast<char>(*left))) {
                ++left;
                continue;
            }
            if (!std::isalnum(static_cast<char>(*right))) {
                --right;
                continue;
            }

            if (std::tolower(*left) != std::tolower(*right)) {
                return false;
            }

            ++left; --right;
        }
        
        return true;
    }
};
