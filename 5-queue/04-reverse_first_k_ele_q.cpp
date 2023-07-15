queue<int> modifyQueue(queue<int> q, int k) {
  stack<int> stack;
  for (int i = 0; i < k; i++) {
    stack.push(q.front());
    q.pop();
  }
  while (stack.size()) {
    q.push(stack.top());
    stack.pop();
  }
  for (int i = 0; i < q.size() - k; i++) {
    int num = q.front();
    q.pop();
    q.push(num);
  }
  return q;
}