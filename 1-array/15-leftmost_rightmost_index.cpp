class Solution {
public:
  pair<long, long> indexes(vector<long long> v, long long x) {
    pair<long, long> ans = {-1, -1};
    // first calculate left index and then right
    long long start = 0, end = v.size() - 1, mid;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      if (v[mid] == x) {
        ans.first = mid;
        end = mid - 1;
      } else if (v[mid] > x)
        end = mid - 1;
      else
        start = mid + 1;
    }
    start = 0, end = v.size() - 1;
    while (start <= end) {
      mid = (start - end) / 2 + end;
      if (v[mid] == x) {
        ans.second = mid;
        start = mid + 1;
      } else if (v[mid] > x)
        end = mid - 1;
      else
        start = mid + 1;
    }
    return ans;
  }
};