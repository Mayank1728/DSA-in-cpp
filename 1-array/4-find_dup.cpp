class Solution {
public:
  vector<int> duplicates(int arr[], int n) {
    // sorting
    for (int i = 1; i < n; i++) {
      for (int j = i - 1; j >= 0; j--) {
        if (arr[j + 1] < arr[j]) {
          int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        } else
          break;
      }
    }

    // map
    int map[n] = {0};
    for (int i = 0; i < n; i++) {
      map[arr[i]]++;
    }

    // greater than 1
    int size = 0;
    for (int i = 0; i < n; i++) {
      if (map[i] > 1)
        size++;
    }
    vector<int> a = {-1};
    if (size == 0)
      return a;

    vector<int> res[size];
    int counter = 0;
    for (int i = 0; i < n; i++) {
      if (map[i] > 1)
        res[counter++] = i;
    }
    return res;
  }
};