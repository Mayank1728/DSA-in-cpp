class Solution {
public:
  // arr1,arr2 : the arrays
  //  n, m: size of arrays
  // Function to return a list containing the union of the two arrays.
  vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    // Your code here
    int start = 0, arr1_len, arr2_len;
    for (int i = 1; i < n; i++) {
      if (arr1[start] != arr1[i]) {
        arr1[++start] = arr1[i];
      }
    }
    arr1_len = start + 1;
    start = 0;
    for (int i = 1; i < m; i++) {
      if (arr2[start] != arr2[i]) {
        arr2[++start] = arr2[i];
      }
    }
    arr2_len = start + 1;
    vector<int> ans;
    int first = 0, second = 0;
    while (first < arr1_len && second < arr2_len) {
      if (arr1[first] == arr2[second]) {
        ans.push_back(arr1[first]);
        first++;
        second++;
      } else if (arr1[first] < arr2[second]) {
        ans.push_back(arr1[first]);
        first++;
      } else {
        ans.push_back(arr2[second]);
        second++;
      }
    }
    while (first < arr1_len) {
      ans.push_back(arr1[first++]);
    }
    while (second < arr2_len) {
      ans.push_back(arr2[second++]);
    }
    return ans;

    // return vector with correct order of elements
  }
};