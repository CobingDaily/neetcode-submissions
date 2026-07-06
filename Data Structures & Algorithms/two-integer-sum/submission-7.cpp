class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const int& n = nums.size();
        // nums[i] == target - nums[j]
        std::unordered_map<int, int> m;
        // m.reserve(n);

        for (int i = 0; i < n; ++i) {
            if (m.contains(target - nums[i])) {
                const int& j = m[target - nums[i]];
                return {j, i};
            }
            m[nums[i]] = i;
        }
        return {};

    }
};
