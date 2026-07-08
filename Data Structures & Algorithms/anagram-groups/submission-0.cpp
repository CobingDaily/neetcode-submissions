class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<string>> v;
        std::unordered_map<string, std::vector<string>> m;

        for (const auto& s : strs) {
            std::string sorted = s;
            std::sort(sorted.begin(), sorted.end());

            if (!m.contains(sorted)) {
                m[sorted] = {s};
            }
            else {
                m[sorted].emplace_back(s);
            }
        }
        
        for (const auto& [sorted, group] : m) {
            v.emplace_back(group);
        }
        return v;
    }
};
