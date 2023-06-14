class Solution {
public:
  string findSum(string X, string Y) {
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());
    while (X.size() > Y.size())
      Y.push_back('0');
    while (X.size() < Y.size())
      X.push_back('0');
    int num1, num2, sum, carry = 0;
    char digit;
    string s;
    for (int i = 0; i < X.size(); i++) {
      num1 = X[i] - '0';
      num2 = Y[i] - '0';
      sum = num1 + num2 + carry;
      digit = sum % 10 + '0';
      s.push_back(digit);
      carry = sum / 10;
    }
    if (carry == 1)
      s.push_back('1');
    while (s.size() > 1 && s.back() == '0')
      s.pop_back();
    reverse(s.begin(), s.end());
    return s;
  }
};