class Solution {
  int minEle;
  stack<pair<int, int>> s;

public:
  /*returns min element from stack*/
  int getMin() {
    if (s.empty())
      return -1;
    pair<int, int> p = s.top();
    return p.second;
  }

  /*returns poped element from stack*/
  int pop() {
    if (s.empty())
      return -1;
    pair<int, int> p = s.top();
    s.pop();
    return p.first;
  }

  /*push element x into the stack*/
  void push(int x) {
    if (s.empty()) {
      minEle = x;
    } else {
      minEle = min(x, s.top().second);
    }
    pair<int, int> p;
    p.first = x;
    p.second = minEle;
    s.push(p);
  }
};