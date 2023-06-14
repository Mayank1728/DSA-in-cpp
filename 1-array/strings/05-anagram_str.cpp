int remAnagram(string str1, string str2) {
  int hashmap[26] = {0}, index, common_count = 0;
  int s1 = str1.size(), s2 = str2.size();
  for (int i = 0; i < s1; i++) {
    index = str[i] - 'a'; // str[i] - 97
    hashmap[index]++;
  }
  for (int i = 0; i < s2; i++) {
    index = str2[i] - 'a';
    if (hashmap[index] > 0) {
      hashmap[index]--;
      common_count++;
    }
  }
  return s1 + s2 - 2 * common_count;
  // Time : O(N + M) N is length of s1 and M is length of s2
  // Space : O(26) constant
}