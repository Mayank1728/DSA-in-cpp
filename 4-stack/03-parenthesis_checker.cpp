class Solution {
public:
  // Function to check if brackets are balanced or not.
  bool ispar(string x) {
    // set pairs and opening
    stack<char> s;
    unordered_map<char, int> isOpeningBracket;
    isOpeningBracket['('] = 1;
    isOpeningBracket['['] = 1;
    isOpeningBracket['{'] = 1;
    unordered_map<char, char> pair;
    pair[')'] = '(';
    pair[']'] = '[';
    pair['}'] = '{';
    for (auto b : x) {
      if (isOpeningBracket[b])
        s.push(b);
      else {
        if (s.size() == 0)
          return false;
        else {
          char top = s.top();
          if (pair[b] != top)
            return false;
          else
            s.pop();
        }
      }
    }
    return s.empty();
  }
};