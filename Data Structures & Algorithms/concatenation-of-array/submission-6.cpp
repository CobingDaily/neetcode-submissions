class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const auto& size = nums.size();

        for (size_t i = 0; i < size; ++i) {
            const auto& num = nums.at(i);
            nums.push_back(num);
        }
        
        return nums;
    }
};