// think for the test case [1,2, 3, 4]
// and [5,4,3,2,1] what should be the answer ?

class Solution {
public:
  vector<long long> nextLargerElement(vector<long long> arr, int n) {
    // we need to find "Nearest element greater than curr on the right"
    vector<long long> nums(n);
    stack<long long> stack;
    stack.push(0);
    for (int i = 1; i < n; i++) {
      if (arr[i] < arr[stack.top()])
        stack.push(i);
      else {
        while (stack.size() && arr[i] > arr[stack.top()]) {
          nums[stack.top()] = arr[i];
          stack.pop();
        }
        stack.push(i);
      }
    }
    while (stack.size()) {
      nums[stack.top()] = -1;
      stack.pop();
    }
    return nums;
  }
};