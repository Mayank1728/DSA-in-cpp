void SortedStack ::sort() {
  // basically sort a given stack using stack
  stack<int> s1 = s;
  stack<int> s2, s3;
  s2.push(s1.top());
  s1.pop();
  while (s1.size()) {

    if (s1.top() <= s2.top()) {
      s2.push(s1.top());
      s1.pop();
    } else {
      while (s2.size() && s1.top() > s2.top()) {
        s3.push(s2.top());
        s2.pop();
      }
      s2.push(s1.top());
      s1.pop();
      while (s3.size()) {
        s2.push(s3.top());
        s3.pop();
      }
    }
  }
  s3 = stack<int>();
  while (s2.size()) {
    s3.push(s2.top());
    s2.pop();
  }
  s = s3;
}