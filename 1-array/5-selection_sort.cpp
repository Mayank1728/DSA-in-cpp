class Solution {
public:
  int select(int arr[], int i) {
    // code here such that selectionSort() sorts arr[]
  }

  void selectionSort(int arr[], int n) {
    // code here
    int index, temp;
    for (int i = 0; i < n; i++) {
      index = i;
      for (int j = i; j < n; j++) {
        if (arr[index] > arr[j])
          index = j;
      }
      temp = arr[i];
      arr[i] = arr[index];
      arr[index] = temp;
    }
  }
}