class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const auto& size = nums.size();
        vector<int> v(size * 2);
        
        for (size_t i = 0; i < size; ++i) {
            v.at(i) = nums.at(i);
            v.at(size + i) = nums.at(i);
        }
        
        return v;
    }
};