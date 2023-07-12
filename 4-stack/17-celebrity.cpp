// O(N^2) bruteForce approach
class Solution {
public:
  // Function to find if there is a celebrity in the party or not.
  int celebrity(vector<vector<int>> &M, int n) {
    for (int i = 0; i < n; i++) {
      bool knowsPerson = false;
      bool knownToAll = true;
      for (int j = 0; j < n && !knowsPerson; j++) {
        if (M[i][j] == 1)
          knowsPerson = true;
      }
      if (knowsPerson == false) {
        for (int j = 0; j < n && knownToAll; j++) {
          if (i != j && M[j][i] == 0)
            knownToAll = false;
        }
      }
      if (knowsPerson == false && knownToAll)
        return i;
    }
    return -1;
  }
};

// O(N) approach