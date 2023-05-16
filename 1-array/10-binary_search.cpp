class Solution {
public:
  int binarysearch(int arr[], int n, int k) {
    // code here
    int index = -1, start = 0, end = n - 1, mid;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      if (arr[mid] == k)
        return mid;
      else if (arr[mid] < k) {
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return index;
  }
};