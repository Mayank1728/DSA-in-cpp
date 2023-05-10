// Name/Desc:

class Solution {
public:
  int missingNumber(vector<int> &array, int n) {

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
      sum += array[i];
    int res = (n * (n + 1)) / 2;
    return res - sum;
    // Time : O(N)
    // Space: O(1)
  }
};