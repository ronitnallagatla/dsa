class Solution {
public:
  int reverse(int x) {

    int result{0};

    while (x != 0) {
      int result = result * 10 + x % 10;
      // need to handle INT_MAX and INT_MIN
      x /= 10;
    }
    return result;
  }
};
