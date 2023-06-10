/*
    Matrix       Index
    1  2  3    00  01  02
    4  5  6    10  11  12
    7  8  9    20  21  22

    Flipped
    7  8  9
    4  5  6
    1  2  3


  */
#include <iostream>
using namespace std;

int main() {
  int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      cout << arr[i][j] << "  ";
    cout << '\n';
  }

  for (int i = 0; i < 1.5; i++) {
    int swapRow = 3 - 1 - i;
    for (int j = 0; j < 3; j++) {
      int temp = arr[i][j];
      arr[i][j] = arr[swapRow][j];
      arr[swapRow][j] = temp;
    }
  }
  cout << "Flipped array: " << '\n';
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      cout << arr[i][j] << "  ";
    cout << '\n';
  }

  return 0;
}