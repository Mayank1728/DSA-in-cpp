/*
    1  2  3    00  01  02
    4  5  6    10  11  12
    7  8  9    20  21  22

    Transpose
    1  4  7    00  10  20
    2  5  8    01  11  21
    3  6  9    02  12  22

    Flip
    7  8  9
    4  5  6
    1  2  3


  */
class Solution {
public:
  // Function to find transpose of a matrix.
  void transpose(vector<vector<int>> &matrix, int n) {
    // code here
    int temp = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
    }
    // Time : O(N^2)
    // Space : O(1)
  }
};