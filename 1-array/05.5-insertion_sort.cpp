class Solution {
public:
  void insert(int arr[], int i) {
    // code here
  }

public:
  // Function to sort the array using insertion sort algorithm.
  void insertionSort(int arr[], int n) {
    // code here
    int temp;
    for (int i = 1; i < n; i++) {
      for (int j = i - 1; j >= 0; j--) {
        if (arr[j + 1] < arr[j]) {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }
};