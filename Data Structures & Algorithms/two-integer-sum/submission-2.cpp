class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        const int& n = nums.size();
        // nums[i] == target - nums[j]
        std::unordered_map<int, int> m;
        m.reserve(n);

        for (int i = 0; i < n; ++i) {
            m[nums[i]] = i;
        }

        std::vector<int> v;
        v.reserve(2);
        for (int i = 0; i < n; ++i) {
            if (!m.contains(target - nums[i])) {
                continue;
            }
            const int& j = m[target - nums[i]];
            if (i != j) {
                v.emplace_back(i);
                v.emplace_back(j);
                break;
            }

        }
        return v;

    }
};
