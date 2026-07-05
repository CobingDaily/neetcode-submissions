class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const auto& size = nums.size();
        nums.reserve(size * 2);

        for (size_t i = 0; i < size; ++i) {
            const auto& num = nums.at(i);
            nums.emplace_back(num);
        }
        
        return nums;
    }
};