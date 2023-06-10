// Rotate image 90 clockwise
class Solution {
public:
  void rotate(vector<vector<int>> &matrix) {
    // transpose
    int size = matrix.size(), temp = 0;
    for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
        temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
      }
    }
    // swap
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size / 2; j++) {
        temp = matrix[i][j];
        matrix[i][j] = matrix[i][size - 1 - j];
        matrix[i][size - 1 - j] = temp;
      }
    }
    // Time : O(N^2)
    // Space : O(1)
  }
};