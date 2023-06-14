class Solution {
public:
  string toLowerCase(string s) {
    int index;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] >= 'A' && s[i] <= 'Z') {
        index = s[i] - 'A';
        s[i] = index + 'a';
      }
    }
    return s;
    // Time : O(N)
    // Space : O(1)
  }
};