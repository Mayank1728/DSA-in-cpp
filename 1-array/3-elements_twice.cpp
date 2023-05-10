class Solution {
public:
  int search(int A[], int N) {
    // using XOR
    int res = 0;
    for (int i = 0; i < N; i++) {
      res = res ^ A[i];
    }
    return res;
    // O(N) and O(1)
  }
};