// LPS longest prefix suffix
// first dry run with acccbaaacccbaac

class Solution {
public:
  int lps(string s) {
    // Your code goes here
    int Lps[s.size() + 1];
    char str[s.size() + 1];
    for (int i = 0; i < s.size(); i++) {
      str[i + 1] = s[i];
      Lps[i] = 0;
    }
    Lps[s.size()] = 0;
    int first = 0, sec = 2;
    while (sec < s.size() + 1) {
      if (str[first + 1] == str[sec]) {
        Lps[sec] = first + 1;
        first++;
        sec++;
      } else if (first != 0)
        fist = Lps[first];
      else
        sec++;
    }
    return Lps[s.size()];
    // Time : O(N)
    // space : O(N)
  }
};