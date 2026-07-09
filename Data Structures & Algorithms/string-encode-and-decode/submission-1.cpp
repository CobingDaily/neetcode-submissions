class Solution {
public:
    string encode(vector<string>& strs) {
        std::string str = "";

        for (const auto& s : strs) {
            const auto& size = s.size();
            str += std::to_string(size);
            str += "#";
            str += s;
        }
        
        return str;
    }

    vector<string> decode(string s) {
        vector<string> str{};
        auto n = s.size();
        size_t start = 0;
        while (start < n) {
            const auto pos = s.find("#", start);
            const auto len = std::stoull(s.substr(start, pos - start));
            str.emplace_back(s, pos + 1, len);
            start = pos + 1 + len;
        }

        return str;
    }
};
