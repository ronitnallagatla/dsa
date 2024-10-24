#include <string>

class Solution {
public:
  bool validPalindrome(std::string s) {
    for (int i{0}, j = s.length() - 1; i < j; ++i, --j) {
      // Two pointers, begin and end
      // keep going until you reach some numbers that dont match
      // from here, check if the substring is matching
      //  form two windows [i, j-1] and [i+1, j]
      //  if either are matching, return true
      if (s[i] != s[j]) {
        int i1{i}, j1{j - 1};
        int i2{i + 1}, j2{j};

        while (i1 < j1 && s[i1] == s[j1]) {
          i1++;
          j1--;
        }
        if (i1 >= j1)
          return true;

        while (i2 < j2 && s[i2] == s[j2]) {
          i2++;
          j2--;
        }
        if (i2 >= j2)
          return true;

        return false;
      }
    }
    return true;
  }
};
