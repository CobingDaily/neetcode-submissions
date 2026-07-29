class Solution {
public:
    int findMin(vector<int> &nums) {
        const auto& n = nums.size();
        int left = 0;
        int right = n - 1;
        int min = nums[0];

        while (left <= right) {
            if (nums[left] <= nums[right]) {
                min = std::min(min, nums[left]);
                break;
            }
            const int& mid = left + (right - left) / 2;
            min = std::min(min, nums[mid]);

            if (nums[left] <= nums[mid]) {
                left = mid + 1;
            }
            else right = mid - 1;
        }
        return min;
    }
};
