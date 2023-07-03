class Solution {
public:
  vector<int> makeBeautiful(vector<int> arr) {
    // code here
    vector<int> stack;
    for (int i = 0; i < arr.size(); i++) {
      if (stack.size() == 0)
        stack.push_back(arr[i]);
      else {
        int top = stack.back();
        if ((top >= 0 && arr[i] >= 0) || top < 0 && arr[i] < 0) {
          stack.push_back(arr[i]);
        } else
          stack.pop_back();
      }
    }
    return stack;
  }
};