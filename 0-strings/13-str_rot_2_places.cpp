// check if string is rotated by 2 places

class Solution {
public:
  // Function to check if a string can be obtained by rotating
  // another string by exactly 2 places.
  bool isRotated(string str1, string str2) {
    if (str1.size() != str2.size())
      return false;

    int l1 = str1.size(), l2 = str2.size();
    string s1, s2;
    // anti cw
    for (int i = 2; i < l1; i++)
      s1.push_back(str1[i]);
    for (int i = 0; i < 2; i++)
      s1.push_back(str1[i]);

    // cw
    if (l1 > 1) {
      for (int i = l1 - 2; i < l1; i++) {
        s2.push_back(str1[i]);
      }
      for (int i = 0; i < l1 - 2; i++) {
        s2.push_back(str1[i]);
      }
    }
    return s1 == str2 || s2 == str2;
    // TIme : O(N)
    // Space : O(N)
  }
};