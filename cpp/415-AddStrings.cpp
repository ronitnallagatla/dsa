#include <algorithm>
#include <string>

class Solution {
public:
  // Start from end of string (LSB), two pointers
  // check if pointer is valid, then get number convert to int
  // sum = a + b + carry
  // carry = c / 10
  // value = c % 10
  // push number to string
  // reverse at end

  std::string addStrings(std::string num1, std::string num2) {
    std::string result{};
    int carry{0};

    int i = num1.length() - 1;
    int j = num2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
      int a = i >= 0 ? num1[i] - '0' : 0;
      int b = j >= 0 ? num2[j] - '0' : 0;
      int c = a + b + carry;
      carry = c / 10;

      result.push_back(c % 10 + '0');

      i--;
      j--;
    }
    std::reverse(result.begin(), result.end());
    return result;
  }
};
