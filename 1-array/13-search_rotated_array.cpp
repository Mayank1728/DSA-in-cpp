class Solution {
public:
  int search(int A[], int l, int h, int key) {
    // l: The starting index
    // h: The ending index, you have to search the key in this range
    int start = 0, end = h, mid;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      if (A[mid] == key)
        return mid;
      else if (A[start] < A[mid]) {
        if (A[start] <= key && key < A[mid])
          end = mid - 1;
        else
          start = mid + 1;
      } else {
        if (A[mid] < key && key <= A[end])
          start = mid + 1;
        else
          end = mid - 1;
      }
    }
    return -1;
  }
};