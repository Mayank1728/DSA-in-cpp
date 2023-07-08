class Solution {
public:
  int calPoints(vector<string> operations) {
    stack<int> stack;
    vector<string> &o = operations;
    int first, sec, sum;
    for (int i = 0; i < o.size(); i++) {
      if (o[i] == "+") {
        sec = stack.top();
        stack.pop();
        first = stack.top();
        stack.pop();
        sum = first + sec;
        stack.push(first);
        stack.push(sec);
        stack.push(sum);
      } else if (o[i] == "D") {
        stack.push(2 * stack.top());
      } else if (o[i] == "C") {
        stack.pop();
      } else {
        stack.push(stoi(o[i]));
      }
    }
    int total = 0;
    while (stack.size()) {
      total += stack.top();
      stack.pop();
    }
    return total;
  }
};