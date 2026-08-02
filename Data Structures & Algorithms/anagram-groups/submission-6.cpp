class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, vector<string>> m;
        for (const auto& str : strs) {
            std::array<char, 26> arr{0};
            for (const auto& c : str) {
                ++arr[c - 'a'];
            }

            const std::string key(arr.begin(), arr.end());
            m[key].emplace_back(str);
        }
        vector<vector<string>> res;
        for (const auto& [key, group] : m) {
            res.push_back(group);
        }

        return res;
    }
};
