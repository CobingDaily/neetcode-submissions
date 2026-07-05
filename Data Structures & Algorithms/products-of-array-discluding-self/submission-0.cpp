class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const auto& n = nums.size();
        auto prefix_prod = vector<int>{};
        prefix_prod.reserve(nums.size());
        auto postfix_prod = vector<int>{};
        postfix_prod.reserve(nums.size());
        
        int prefix_product{1}; 
        int postfix_product{1}; 
        int i{0};
        for (; i < n; ++i) {
            prefix_prod[i] = prefix_product;
            prefix_product *= nums[i];
        }

        for (i = n-1; i >= 0; --i) {
            postfix_prod[i] = postfix_product;
            postfix_product *= nums[i];
        }

        auto v = vector<int>(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            v[i] = prefix_prod[i] * postfix_prod[i];
        }

        return v;

    }
};
