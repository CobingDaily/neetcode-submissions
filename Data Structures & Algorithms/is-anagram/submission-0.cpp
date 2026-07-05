class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> map{};

        for (char c : s) {
            if (!map.contains(c)) {
                map[c] = 1;
            }
            else {
                map[c]++;
            }
        }
        
        for (char c : t) {
            if (!map.contains(c)) {
                map[c] = 1;
            }
            else {
                map[c]--;
            }
        }

        for (auto& [k, v] : map) {
            if (v != 0) return false;
        }
        return true;
    }
};
