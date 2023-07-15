class Solution {
public:
  string longestCommonPrefix(string arr[], int N) {
    int min = arr[0].size(), index = 0;
    for (int i = 1; i < N; i++) {
      if (min > arr[i].size()) {
        min = arr[i].size();
        index = i;
      }
    }
    string str;
    char c;
    for (int i = 0; i < arr[index].size(); i++) {
      c = arr[index][i];
      for (int j = 0; j < N; j++) {
        if (arr[j][i] != c) {
          if (str.size() > 0)
            return str;
          else
            return "-1";
        }
      }
      str.push_back(c);
    }
    return str;
    // Time : O(len of smallest string * N ) N is the no of elements in array
    // Space : smallest string in the array
  }
}