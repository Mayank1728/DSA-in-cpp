class Solution {
public:
  // Function to count the number of substrings that start and end with 1.
  long binarySubstring(int n, string a) {

    // using the formulae nCr we deduced no of strings
    long count = 0;
    for (long i = 0; i < n; i++) {
      if (a[i] == '1')
        count++;
    }
    return (count * (count - 1)) / 2;
    // Time : O(N)
    // Space : O(1)
  }
};