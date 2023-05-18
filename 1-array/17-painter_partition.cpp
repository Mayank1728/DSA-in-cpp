// painter partition problem interview bit
// https://www.interviewbit.com/problems/painters-partition-problem/

int Solution::paint(int painters, int time, vector<int> &C) {
  long long start = 0, end = 0, mid = 0;
  for (int i = 0; i < C.size(); i++) {
    start = start < C[i] ? C[i] : start;
    end += C[i];
  }
  long long ans;
  while (start <= end) {
    mid = (start - end) / 2 + end;
    long long painter_allocated = 1, time_alloc = 0;
    for (int i = 0; i < C.size(); i++) {
      time_alloc += C[i];
      if (time_alloc > mid) {
        time_alloc = C[i];
        painter_alloc++;
      }
    }
    if (painter_alloc <= painters) {
      ans = mid;
      end = mid - 1;
    } else
      start = mid + 1;
  }
  return ans;
}