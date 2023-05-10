class Solution {
public:
  // Function to sort the array using bubble sort algorithm.
  void bubbleSort(int arr[], int n) {
    // Your code here
    int swap = 0;
    int temp;
    do {
      swap = 0;
      for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
          temp = arr[i];
          arr[i] = arr[i + 1];
          arr[i + 1] = temp;
          swap++;
        }
      }
    } while (swap > 0);
  }
};