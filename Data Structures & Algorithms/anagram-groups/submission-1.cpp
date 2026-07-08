class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> v;
        std::unordered_map<string, std::vector<string>> m;

        for (const auto& s : strs) {
            std::array<char, 26> arr{0};

            for (const char& c : s) { 
                ++arr[c - 'a'];
            }

            const string key(arr.begin(), arr.end());

            if (!m.contains(key)) {
                m[key] = {s};
            }
            else {
                m[key].emplace_back(s);
            }
        }
        
        for (const auto& [sorted, group] : m) {
            v.emplace_back(group);
        }
        return v;
    }
};
