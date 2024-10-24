#include <unordered_map>
#include <vector>
class Solution {
public:
  // Double for loop
  // Time: O(N^2)
  // Space: O(1)
  std::vector<int> twoSum1(std::vector<int> &nums, int target) {
    std::vector<int> result{};
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          result.push_back(i);
          result.push_back(j);
          break;
        }
      }
    }
    return result;
  }

  // Hash Map
  // Time: O(N)
  // Space: O(N)
  std::vector<int> twoSum2(std::vector<int> &nums, int target) {

    std::vector<int> result{};
    std::unordered_map<int, int> map{};

    for (int i{0}; i < nums.size(); ++i) {
      int value = target - nums[i];
      if (map.count(value) > 0) {
        result.push_back(map[value]);
        result.push_back(i);
        break;
      }
      map[nums[i]] = i;
    }
    return result;
  }
};
