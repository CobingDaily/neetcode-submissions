class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> v;
        v.reserve(strs.size());
        std::unordered_map<string, std::vector<string>> m;

        for (const auto& s : strs) {
            std::array<char, 26> arr{0};

            for (const char& c : s) { 
                ++arr[c - 'a'];
            }

            const string key(arr.begin(), arr.end());
            m[key].emplace_back(s);
        }
        
        for (const auto& [key, group] : m) {
            v.emplace_back(group);
        }

        return v;
    }
};
