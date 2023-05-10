class Solution {
public:
  int makeProductOne(int arr[], int N) {
    int prdt = 1, steps = 0;
    bool is_zero = 0;
    for (int i = 0; i < N; i++) {
      if (arr[i] > 0) {
        steps += arr[i] - 1;
        arr[i] = 1;
      } else if (arr[i] < 0) {
        steps += -arr[i] - 1;
        arr[i] = -1;
      } else {
        steps++;
        is_zero = 1;
        arr[i] = 1;
      }
      prdt = prdt * arr[i];
    }
    if (prdt == -1 && is_zero == 0)
      return steps + 2;
    return steps;
    // Time : O(N)
    // Space : O(1)
  }
};