class Solution {
public:
  // Function to find largest rectangular area possible in a given histogram.
  long long getMaxArea(long long arr[], int n) {
    vector<int> left(n, -1); // initialize vector of size n with -1
    vector<int> right(n, n); // initialize vector of size n with n
    stack<int> stack;
    for (int i = n - 1; i > -1; i--) {
      while (stack.size() && arr[stack.top()] > arr[i]) {
        left[stack.top()] = i;
        stack.pop();
      }
      stack.push(i);
    }
    // clear and reset stack
    stack = ::stack<int>();
    for (int i = 0; i < n; i++) {
      while (stack.size() && arr[stack.top()] > arr[i]) {
        right[stack.top()] = i;
        stack.pop();
      }
      stack.push(i);
    }
    // calculate maxArea
    long long area = LONG_MIN, len, width;
    for (int i = 0; i < n; i++) {
      len = arr[i];
      width = right[i] - left[i] - 1;
      area = max(area, len * width);
    }
    return area;
  }
};