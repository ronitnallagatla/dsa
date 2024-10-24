#include <vector>

class Solution {
public:
  int maxArea(std::vector<int> &height) {
    int i{0};
    int j{static_cast<int>(height.size() - 1)};
    int area{0};

    while (i < j) {
      int width{j - i};
      area = std::max(area, width * std::min(height[i], height[j]));
      if (height[j] < height[i])
        i++;
      else
        j--;
    }
    return area;
  }
};
