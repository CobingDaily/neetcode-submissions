class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for (const auto& n : s) {
            if (s.contains(n - 1)) continue;

            int length = 0; 
            while (s.contains(n + length)) { 
                ++length;
            }

            longest = std::max(longest, length);
        }

        return longest;
        
    }
};
