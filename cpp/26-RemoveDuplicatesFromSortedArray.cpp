#include <vector>

class Solution {
public:
  int removeDuplicates(std::vector<int> &nums) {

    // We know nums is sorted, guaranteed that repeating
    // numbers will be next to each other

    // Two pointers, keep checking if consec numbers are equal
    // if not then replace match_idx with non equal number
    // advance i pointer while numbers are equal.

    int match_idx{0};
    for (int i{0}; i < nums.size(); ++i) {
      if (nums[i] != nums[match_idx]) {
        match_idx++;
        nums[match_idx] = nums[i];
      }
    }
    return match_idx + 1;
  }
};
