// return the no of distinct elements in the given array

class Solution {
public:
  int remove_duplicate(int a[], int n) {
    // code here
    int start = 0, end;
    for (end = 1; end < n; end++) {
      if (a[start] != a[end]) {
        a[++start] = a[end];
      }
    }
    return start + 1;
  }
};