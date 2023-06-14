#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  // method 1: 2 pointer
  string str = "Hello World";
  int start = 0, end = str.size() - 1;
  char letter;
  while (start <= end) {
    // swap start and end
    letter = str[start];
    str[start] = str[end];
    str[end] = letter;
    // increment start and decrement end
    start++;
    end--;
  }
  cout << str << endl;

  // method 2: using reverse function in bits/stdc++.h library
  reverse(str.begin(), str.end());
  cout << str;

  return 0;
}