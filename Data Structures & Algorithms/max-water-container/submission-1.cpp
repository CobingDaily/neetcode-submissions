class Solution {
public:
    int maxArea(vector<int>& heights) {
        const auto& n = heights.size();
        int biggest = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) { 
                int height = std::min(heights[i], heights[j]);
                int width = j - i;
                biggest = std::max(biggest, height * width);
            }
        }

        return biggest;
    }
};
