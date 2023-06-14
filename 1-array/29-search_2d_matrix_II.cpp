// find target in a matrix whose
// each row is sorted and each col is sorted
/*
   1  2   3
   8  11  12
   10 17  21

   This matrix's each row and col is sorted
   find the target element.
*/

// Note: whenever sorted is given
// 1- binary search approach
// 2- 2 pointer approach such that there is a pattern
//    the value inc on right and dec on left
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int totalRow = matrix.size();
    int totalCol = matrix[0].size();
    int row = totalRow - 1;
    int col = 0;

    // the row and col pointers should be
    // within the matrix total row and col range
    while (row > -1 && row < totalRow && col > -1 && col < totalCol) {
      if (matrix[row][col] == target)
        return true;
      else if (target < matrix[row][col]) {
        // go upwards
        row--;
      } else {
        // go rightwards
        col++;
      }
    }
    return false;

    // Time : O(M + N)
    // Space : O(1)
  }
};
