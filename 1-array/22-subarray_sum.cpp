#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 7, 5};
  long long s = 12;
  long long sum = 0;
  int start = 0, end = 0;
  while (start <= end) {
    cout << start << "  " << end << endl;
    if (sum == s) {
      cout << "Found" << endl;
      return 0;
    } else if (sum < s)
      sum += arr[end++];
    else
      sum -= arr[start++];
  }
  return {-1};
}