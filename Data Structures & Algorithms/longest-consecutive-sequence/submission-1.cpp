class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        auto s = std::unordered_set(nums.begin(), nums.end());

        int longest = 0;

        for (auto& n : s) {
            if (!s.contains(n-1)) {
                // the begining of the sequence
                int length = 0;

                while (s.contains(n + length)) {
                    ++length;
                }

                longest = std::max(length, longest);
            }
            
        }

        return longest;
    }
};
