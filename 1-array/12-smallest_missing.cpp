// smallest missing element from sorted array
// https://www.techiedelight.com/?problem=SmallestMissingNumber

class Solution {
public:
  int findSmallestMissingNumber(vector<int> const &nums) {
    // Write your code here...
    int start = 0, end = nums.size() - 1, mid, smallest = -1;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      if (nums[mid] == mid)
        start = mid + 1;
      else {
        smallest = mid;
        end = mid - 1;
      }
    }
    if (smallest == -1) // return size when each ele == to index value
      return nums.size();
    return smallest;
  }
};