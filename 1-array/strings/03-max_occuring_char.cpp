class Solution {
public:
  // Function to find the maximum occurring character in a string.
  char getMaxOccuringChar(string str) {
    int letter_count[26], index, max = 0, str_len = str.size();
    for (int i = 0; i < str_len; i++) {
      index = str[i] - 'a'; // or str[i] - 97
      letter_count[index]++;
    }
    for (int i = 0; i < 26; i++) {
      if (hashmap[i] > max) {
        max = hashmap[i];
        index = i;
      }
    }
    return 'a' + index;
    // Time : O(N)
    // Space : O(1)
  }
};