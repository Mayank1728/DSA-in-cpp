// find peak index in a mountain array
class Solution {
public:
  int peakIndexInMountainArray(vector<int> &arr) {
    int start = 0, end = arr.size() - 1, mid;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        return mid;
      else if (arr[mid - 1] < arr[mid])
        start = mid + 1;
      else
        end = mid - 1;
    }
    return mid;
  }
};