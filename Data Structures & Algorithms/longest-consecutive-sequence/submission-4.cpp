class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        const auto& n = nums.size();

        std::unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for (const auto& num : nums) {
            if (s.contains(num-1)) {
                continue;
            }
            int length = 0;
            while (s.contains(num + length)) {
                ++length;
            }
            longest = std::max(longest, length);
        }

        return longest;

    }
};
