class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> m;

        for (const auto& str : strs) {  
            string key = str;
            std::sort(key.begin(), key.end());
        
            m[key].push_back(str);
        }

        std::vector<std::vector<string>> v;

        for (const auto& [key, group] : m) {
            v.push_back(group);
        }

        return v;
    }
};
