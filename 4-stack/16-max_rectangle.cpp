// maximal rectangle

class Solution {
public:
  int maxArea(int M[MAX][MAX], int n, int m) {
    int arr[m];
    fill_n(arr, m, 0);
    int histoArea, area = INT_MIN;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (M[i][j])
          arr[j]++;
        else
          arr[j] = 0;
      }
      histoArea = checkHistoArea(arr, m);
      area = max(area, histoArea);
    }
    return area;
  }
  int checkHistoArea(int arr[], int n) {
    vector<int> left(n, -1);
    vector<int> right(n, n);
    stack<int> stack;
    for (int i = 0; i < n; i++) {
      while (stack.size() && arr[stack.top()] > arr[i]) {
        right[stack.top()] = i;
        stack.pop();
      }
      stack.push(i);
    }
    stack = ::stack<int>();
    for (int i = n - 1; i > -1; i--) {
      while (stack.size() && arr[stack.top()] > arr[i]) {
        left[stack.top()] = i;
        stack.pop();
      }
      stack.push(i);
    }
    int area = INT_MIN, len, width;
    for (int i = 0; i < n; i++) {
      len = arr[i];
      width = right[i] - left[i] - 1;
      area = max(area, len * width);
    }
    return area;
  }
};