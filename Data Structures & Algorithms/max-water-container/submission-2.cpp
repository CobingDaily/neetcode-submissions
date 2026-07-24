class Solution {
public:
    int maxArea(vector<int>& heights) {
        const auto& n = heights.size();
        int area = 0; 

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int width = right - left;
            int height = std::min(heights[left], heights[right]);
            area = std::max(area, width * height);

            if (heights[left] < heights[right]) {
                ++left;
            }
            else { --right; } 
        }
        return area;
    }
};
