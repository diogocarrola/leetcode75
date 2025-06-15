#include <vector>
#include <algorithm>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;
        
        while (left < right) {
            int current_height = std::min(height[left], height[right]);
            int current_width = right - left;
            max_area = std::max(max_area, current_height * current_width);
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_area;
    }
};