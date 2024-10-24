#include <algorithm>
#include <string>

class Solution {
public:
  // sum = a + b + carry
  // v = sum & 1
  // c = (sum >> 1) & 1
  std::string addBinary(std::string a, std::string b) {
    std::string result{};
    int carry{0};

    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
      int d1 = i >= 0 ? a[i] - '0' : 0;
      int d2 = j >= 0 ? b[j] - '0' : 0;
      int c = d1 + d2 + carry;
      result.push_back((c & 1) + '0');
      carry = (c >> 1) & 1;
      i--;
      j--;
    }
    std::reverse(result.begin(), result.end());
    return result;
  }
};
