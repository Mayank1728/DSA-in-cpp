long long maxArea(long long A[], int len) {
  // bruteforce
  long long area, length, breadth, max_area = 0;
  for (int i = 0; i < len - 1; i++) {
    area = 0;
    for (int j = i + 1; j < len; j++) {
      area = (j - i) * min(A[j], A[i]);
      max_area = max(max_area, area);
    }
  }
  // Time : O(N^2)
  // Space : O(1)
  return max_area;
}

long long maxArea(long long A[], int len) {
  // Your code goes here
  int start = 0, end = len - 1, area = 0, max_area = 0;
  while (start < end) {
    area = (end - start) * min(A[start], A[end]);
    max_area = max(max_area, area);
    if (A[start] < A[end])
      start++;
    else
      end--;
  }
  // Optimized solution using 2 pointer
  // Time : O(N)
  // Space : O(1)
  return max_area;
}