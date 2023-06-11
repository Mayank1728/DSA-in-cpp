class Solution {
public:
  void rotateMatrix(vector<vector<int>> &arr, int n) {
    // code here

    // transpose
    int temp = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i] = temp;
      }
    }

    // swap half
    for (int i = 0; i < n / 2; i++) {
      for (int j = 0; j < n; j++) {
        temp = arr[i][j];
        arr[i][j] = arr[n - 1 - i][j];
        arr[n - 1 - i][j] = temp;
      }
    }
  }
};