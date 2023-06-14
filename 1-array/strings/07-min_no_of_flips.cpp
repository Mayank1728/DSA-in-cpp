int minFlips(string S) {
  // your code here
  // sw0 means starting_with_zero
  int size = S.size(), sw0 = 0, sw1 = 0;
  for (int i = 0; i < size; i++) {
    if ((i % 2 == 0 && S[i] != '0') || (i % 2 != 0 && S[i] != '1'))
      sw0++;
    if ((i % 2 == 0 && S[i] != '1') || (i % 2 != 0 && S[i] != '0'))
      sw1++;
  }
  return min(sw0, sw1);
  // Time : O(N)
  // Space : O(1)
}