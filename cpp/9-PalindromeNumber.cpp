class Solution {
public:
  bool isPalindrome(int x) {
    if (x < 0)
      return false;
    if (x == 0)
      return true;
    if (x % 10 == 0)
      return false;

    // Split the number in half, check if one half is same as reverse of other
    // Get each number in x starting from LSB to sum
    // x = 123321    12332     1233     123
    // sum = 0       1         12       123
    // end loop when x <= sum
    // palindrome if
    // [even] if x == sum
    // [odd] if x == sum/10 (drop the last number)

    int sum = 0;
    while (x > sum) {

      sum = sum * 10 + x % 10;
      x /= 10;
    }
    return (x == sum) || (x == sum / 10);
  }
};
