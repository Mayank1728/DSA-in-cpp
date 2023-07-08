#include <bits/stdc++.h>
using namespace std;
int main() {
  stack<char> stack;
  stack.push('0');
  stack.push('0');
  stack.push('4');
  stack.push('5');
  string str;
  while (stack.size()) {
    str.push_back(stack.top());
    stack.pop();
  }
  cout << str << endl;
  reverse(str.begin(), str.end());
  cout << str;
  int a = stoi(str);
  cout << endl << a;
  str = to_string(a);
  cout << endl << str;
}