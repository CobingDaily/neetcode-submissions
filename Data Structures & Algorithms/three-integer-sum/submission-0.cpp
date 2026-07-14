class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // nums[i] +  nums[j] + nums[k] = 0
        sort(nums.begin(), nums.end());
        const auto& n = nums.size();
        vector<vector<int>> result;

        for (size_t k = 0; k < n - 2; ++k) {
            if (k > 0 && nums[k] == nums[k-1]) continue;

            int left = k + 1;
            int right = n - 1;

            while (left < right) {
                long sum = nums[k] + nums[left] + nums[right];

                if (sum < 0) {
                    ++left;
                }
                else if (sum > 0) {
                    --right;
                }
                else {
                    result.push_back({nums[k],
                                      nums[left],
                                      nums[right]});

                    while (left < right && nums[left] == nums[left+1]) { ++left; }
                    while (left < right && nums[right] == nums[right-1]) { --right; }
                    
                    left++;
                    right--;
                }
            }
        }
        
        return result;
    }
};
