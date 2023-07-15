// min ch to be added in front to make the string palindrome
#include <bits/stdc++.h>
using namespace std;

int minChar(string str) {
  // if len = 1 then no need to add any ch
  if (str.length() == 1)
    return 0;
  int total = str.size() * 2 + 2;
  char s[total];
  int size = str.size();
  int lps[total];
  for (int i = 0; i < size; i++) {
    s[i + 1] = s[total - 1 - i] = str[i];
    lps[i] = 0;
    lps[total - 1 - i] = 0;
  }
  s[size + 1] = '$';
  lps[size] = 0;
  lps[size + 1] = 0;

  int first = 0;
  int sec = 2;
  while (sec < total) {
    if (s[first + 1] == s[sec]) {
      lps[sec] = first + 1;
      first++;
      sec++;
    } else {
      if (first != 0) {
        first = lps[first];
      } else {
        sec++;
      }
    }
  }
  for (auto i : lps)
    cout << i << " ";
  cout << endl;
  for (auto i : s)
    cout << i << " ";
  cout << endl;
  return size - lps[total - 1];
  // Time : O(N)
  // Space : O(N)
}
int main() { cout << minChar("aacacaaa"); }