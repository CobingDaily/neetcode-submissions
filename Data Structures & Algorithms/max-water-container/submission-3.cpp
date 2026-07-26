class Solution {
public:
    int maxArea(vector<int>& heights) {
        const auto& n = heights.size();

        int area = 0;

        int left = 0;
        int right = n - 1;
        
        while (left < right) {  
            int height = std::min(heights[left], heights[right]);
            int width = right - left;
            area = std::max(area, width * height);

            if (heights[left] < heights[right]) {
                ++left;
            }
            else --right;
        }

        return area;
    }
};
