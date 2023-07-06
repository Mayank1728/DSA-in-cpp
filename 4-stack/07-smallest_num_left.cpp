// think for the test case [1,2, 3, 4]
// and [5,4,3,2,1] what should be the answer ?

class Solution {
public:
  vector<int> leftSmaller(int n, int a[]) {
    // code here
    vector<int> nums(n, -1);
    stack<int> stack;
    stack.push(n - 1);
    for (int i = n - 2; i > -1; i--) {
      if (a[i] >= a[stack.top()])
        stack.push(i);
      else {
        while (stack.size() && a[i] < a[stack.top()]) {
          nums[stack.top()] = a[i];
          stack.pop();
        }
        stack.push(i);
      }
    }
    return nums;
  }
};