/*
Hint
similar to check if rotated string is contained inside string
example:  aeiou, iouae => true
solution: check "iouae" inside "aeiouaeiou"
*/
class Solution {
public:
  vector<int> nextGreaterElements(vector<int> &nums) {
    int n = nums.size();
    vector<int> arr(n, -1);
    stack<int> stack;
    for (int i = 0; i < 2 * n; i++) {
      while (stack.size() && nums[stack.top()] < nums[i % n]) {
        arr[stack.top()] = nums[i % n];
        stack.pop();
      }
      if (i < n)
        stack.push(i);
    }
    return arr;
  }
};