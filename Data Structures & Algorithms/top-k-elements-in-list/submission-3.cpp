class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        const auto& n = nums.size();
        std::unordered_map<int, int> freqs;

        for (const auto& num : nums) { 
            if (!freqs.contains(num))
                freqs[num] = 1;
            else ++freqs[num];
        }

        // sorted (indexed) by frequencies, at most frequency = n
        std::vector<std::vector<int>> v(n + 1);

        for (const auto& [num, freq] : freqs) { 
            v[freq].push_back(num);
        }

        std::vector<int> result;
        result.reserve(k);

        for (int i = n; i >= 0; --i) {
            if (k == 0) break;

            const auto& bucket = v[i];

            for (const auto& num : bucket) {
                if (k == 0) break;
            
                result.push_back(num);
                --k;
            }
        }

        return result;

    }
};
