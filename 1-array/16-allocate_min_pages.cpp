// allocate minimum no of pages
class Solution {
public:
  // Function to find minimum number of pages.
  int findPages(int A[], int N, int M) {
    // edge case
    if (M > N)
      return -1;
    long long start = 0, end = 0, mid = 0;
    for (int i = 0; i < N; i++) {
      if (start < A[i])
        start = A[i];
      end += A[i];
    }
    int min = 0;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      int allocated = 0, no_of_stu = 1;
      for (int i = 0; i < N; i++) {
        allocated += A[i];
        if (allocated > mid) {
          allocated = A[i];
          no_of_stu++;
        }
      }
      if (no_of_stu <= M) {
        min = mid;
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
    return min;
  }
};