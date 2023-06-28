// Time : O(2^N) and shows Time limit exceeded
// Space : O(N)
// will write the dynamic prog approach soon
class Solution {
public:
  int ways(int n) {
    if (n == 1 || n == 2)
      return n;
    return ways(n - 1) + ways(n - 2);
  }
  int climbStairs(int n) { return ways(n); }
};