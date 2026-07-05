class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const auto& n = nums.size();
        auto v = vector<int>(n);

        int prefix_product{1};
        int postfix_product{1};
        int i{0};
        for (; i < n; ++i) {
            v[i] = prefix_product;
            prefix_product *= nums[i];
        }

        for (i = n - 1; i >= 0; --i) {
            v[i] *= postfix_product;
            postfix_product *= nums[i];
        }

        return v;
    }
};
