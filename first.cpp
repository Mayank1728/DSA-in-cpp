#include <bits/stdc++.h>
using namespace std;

// 1 1 2 3 5 8 13 21 34
// 1 2 3 4 5 6 7  8   9
long long fib(int n) {
  if (n == 0 || n == 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}
int main() { cout << fib(8); }