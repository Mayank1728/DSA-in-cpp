#include <iostream>
using namespace std;

int mystery(int n) {
  if (n <= 1) {
    return n;
  } else {
    return mystery(n - 1) * mystery(n - 2);
  }
}

int main() {
  int result = mystery(6);
  cout << result << endl;
  return 0;
}
