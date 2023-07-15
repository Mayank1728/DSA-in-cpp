class Solution {
public:
  int isPalindrome(string S) {
    // Your code goes here
    int start = 0, end = S.size() - 1, mid;
    while (start <= end) {
      if (S[start] != S[end])
        return 0;
      start++;
      end--;
    }
    return 1;
  }
};