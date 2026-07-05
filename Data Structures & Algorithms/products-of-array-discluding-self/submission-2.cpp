class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const auto& n = nums.size();
        auto v = vector<int>(n, 1);

        int prefix_product{1};
        int postfix_product{1};
        for (int i = 0; i < n; ++i) {
            int j = n - i - 1;
            v[i] *= prefix_product;
            prefix_product *= nums[i];

            v[j] *= postfix_product;
            postfix_product *= nums[j];
        }

        return v;
    }
};
