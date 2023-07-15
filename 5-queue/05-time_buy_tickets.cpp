class Solution {
public:
  int timeRequiredToBuy(vector<int> &tickets, int k) {
    queue<int> queue;
    for (int i = 0; i < tickets.size(); i++)
      queue.push(i);
    int time = 0, num;
    while (queue.size()) {
      num = queue.front();
      queue.pop();
      tickets[num]--;
      time++;
      if (k == num && tickets[num] == 0)
        break;
      if (tickets[num])
        queue.push(num);
    }
    return time;
  }
};