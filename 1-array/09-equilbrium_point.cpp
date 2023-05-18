class Solution {
public:
  // Function to find equilibrium point in the array.
  // a: input array
  // n: size of array
  int equilibriumPoint(long long a[], int n) {

    // Your code here
    int total_sum = 0;
    for (int i = 0; i < n; i++)
      total_sum += a[i];
    int left_sum = 0;
    int right_sum = total_sum;
    for (int i = 0; i < n; i++) {
      right_sum -= a[i];
      if (left_sum == right_sum)
        return i + 1;
      left_sum += a[i];
    }
    return -1;
  }
};