class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> m;
        m.reserve(nums.size());
        for (const auto& n : nums) {
            if (!m.contains(n)) {
                m[n] = 1;
            }
            else ++m[n];
        }

        const int& n = nums.size();
        // index = frequency, v[index] = number
        std::vector<std::vector<int>> v(n+1);

        for (const auto& [key_number, value_frequency] : m) {
            v[value_frequency].push_back(key_number);
        }

        std::vector<int> ans;
        ans.reserve(k);
        for (int i = n; i >= 0; --i) {
            const std::vector<int>& nums = v[i];

            for (const int& num : nums) { 
                if (ans.size() == k) break;
                ans.emplace_back(num);
            }

        }

        return ans;
    }
};
