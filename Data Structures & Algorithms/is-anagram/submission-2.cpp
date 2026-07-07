class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        const size_t& n = s.size();

        std::array<int, 26> seen{0};

        for (const auto& c : s) {
            if (!seen[c - 'a']) {
                seen[c - 'a'] = 1;
            }
            else ++seen[c - 'a'];
        }

        for (const auto& c : t) {
            if (!seen[c - 'a']) {
                return false;
            }
            else --seen[c - 'a'];
        }

        for (const auto& v : seen) {
            if (v != 0) return false;
        }
        return true;
        
    }
};
