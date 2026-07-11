class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;

        auto left = s.begin();
        auto right = s.end() - 1;

        while (left < right) {
            if (!std::isalnum(static_cast<unsigned char>(*left))) {
                ++left;
                continue;
            }
            if (!std::isalnum(static_cast<unsigned char>(*right))) {
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
