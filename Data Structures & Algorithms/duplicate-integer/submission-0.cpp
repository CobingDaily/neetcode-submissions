class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map{};

        for (const auto& n : nums) {
            if (!map.contains(n))
                map[n] = 1;
            else return true;
        }

        return false;
    }
};