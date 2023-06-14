string merge(string S1, string S2) {
  // your code here
  string s;
  int start = 0, s1 = S1.size(), s2 = S2.size();
  for (int i = 0; i < max(s1, s2); i++) {
    if (start < s1)
      s.push_back(S1[start]);
    if (start < s2)
      s.push_back(S2[start]);
    start++;
  }
  return s;
  // Time : O(max(S1, S2)) linear
  // Space : O(S1 + S2) linear
}