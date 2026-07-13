class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            long sum = numbers[left] + numbers[right];

            if (sum < target) {
                // must increase the sum -> advance left
                ++left;
            }
            else if (sum > target) {
                // must decrease the sum -> decrement right
                --right;
            }
            else return {left + 1, right + 1};
        }

        return {};
    }
};
