class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int start = 0, end = matrix.size() * matrix[0].size() - 1;
    int totalCols = matrix[0].size(), mid, row, col;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      // Just normal binary serach only catch is
      // convert the mid index to row and col
      // to acces the element in the matrix
      row = mid / totalCols;
      col = mid % totalCols;
      if (matrix[row][col] == target)
        return true;
      else if (matrix[row][col] < target)
        start = mid + 1;
      else
        end = mid - 1;
    }
    return false;
    // Time : O(log (N * M))
    // Space : O(1)
  }
};