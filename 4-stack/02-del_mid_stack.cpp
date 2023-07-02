class Solution {
public:
  // Function to delete middle element of a stack.
  void deleteMid(stack<int> &s, int sizeOfStack) {
    stack<int> temp;
    int data;
    for (int i = 0; i < sizeOfStack / 2; i++) {
      temp.push(s.top());
      s.pop();
    }
    s.pop();
    for (int i = 0; i < sizeOfStack / 2; i++) {
      data = temp.top();
      temp.pop();
      s.push(data);
    }
  }
};