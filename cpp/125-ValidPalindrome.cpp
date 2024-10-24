#include <cctype>
#include <string>

class Solution {
public:
  bool isPalindrome(std::string s) {
    int i{0};
    int j{static_cast<int>(s.length() - 1)};

    while (i < j) {
      while (i <= j && !std::isalpha(s[i]) && !std::isdigit(s[i])) {
        i++;
      }
      while (i <= j && !std::isalpha(s[j]) && !std::isdigit(s[j])) {
        j--;
      }
      if (i >= j)
        break;

      if (std::toupper(s[i]) != std::toupper(s[j])) {
        return false;
      }
      i++;
      j--;
    }

    return true;
  }
};
