class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const auto& size = nums.size();
        vector<int> v;
        v.reserve(size * 2);
        v.insert(v.end(), nums.begin(), nums.end());
        v.insert(v.end(), nums.begin(), nums.end());
        
        return v;
    }
};