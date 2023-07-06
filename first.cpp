class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    stack<int> stack;
    int res = 0, first, sec;
    for (auto t : tokens) {
      if (t == "+") {
        sec = stack.top();
        stack.pop();
        first = stack.top();
        stack.pop();
        res = first + sec;
        stack.push(first);
        stack.push(sec);
        stack.push(res);
      } else if (t == "-") {
        sec = stack.top();
        stack.pop();
        first = stack.top();
        stack.pop();
        res = first - sec;
        stack.push(first);
        stack.push(sec);
        stack.push(res);
      } else if (t == "*") {
        sec = stack.top();
        stack.pop();
        first = stack.top();
        stack.pop();
        res = first * sec;
        stack.push(first);
        stack.push(sec);
        stack.push(res);
      } else if (t == "/") {
        sec = stack.top();
        stack.pop();
        first = stack.top();
        stack.pop();
        res = first / sec;
        stack.push(first);
        stack.push(sec);
        stack.push(res);
      } else {
        stack.push(stoi(r));
      }
    }
    return stack.top();
  }
};