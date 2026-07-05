class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const auto& size = nums.size();
        vector<int> v(size * 2);
        v.reserve(size * 2);
        
        for (size_t i = 0; i < size; ++i) {
            v[i] = nums[i];
            v[size + i] = nums[i];
        }
        
        return v;
    }
};