#include <iostream>
#include <vector>

using namespace std;

// sort a string or character array in O(N) time
int main() {
  string str = "ayzuqnmdkutaklbyxoiox";
  int hashMap[26] = {0}, index, size = str.size();
  for (int i = 0; i < size; i++) {
    index = str[i] - 'a';
    hashMap[index]++;
  }
  string output;
  char letter;
  for (int i = 0; i < 26; i++) {
    letter = 'a' + i;
    for (int j = 0; j < hashMap[i]; j++) {
      output.push_back(letter);
    }
  }
  cout << output;
  return 0;
}