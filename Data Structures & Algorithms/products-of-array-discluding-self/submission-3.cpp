class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const auto& n = nums.size();
        std::vector<int> l(n, 1);
        std::vector<int> r(n, 1);

        int l_prod = 1;
        int r_prod = 1;

        for (int i = 0; i < n; ++i) { 
            l[i] = l_prod;
            l_prod *= nums[i];

            const auto& j = n - i - 1;
            r[j] = r_prod;
            r_prod *= nums[j];
        }

        std::vector<int> result(n);

        for (int i = 0; i < n; ++i) {
            result[i] = l[i] * r[i];
        }

        return result;
    }
};
