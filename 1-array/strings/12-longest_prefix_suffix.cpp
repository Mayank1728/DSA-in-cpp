// LPS longest prefix suffix

class Solution {
public:
  int lps(string s) {
    // Your code goes here
    int LPS[s.size() + 1];
    char str[s.size() + 1];
    for (int i = 0; i < s.size(); i++) {
      str[i + 1] = s[i];
      LPS[i] = 0;
    }
    LPS[s.size()] = 0;
    int first = 0;
    int sec = 2;
    while (sec < s.size() + 1) {
      if (str[first + 1] == str[sec]) {
        LPS[sec] = first + 1;
        first++;
        sec++;
      } else {
        // LPS[first] != 0
        if (first)
          first = LPS[first];
        else {
          sec++;
        }
      }
    }
    return LPS[s.size()];
    // Time : O(N)
    // space : O(N)
  }
};