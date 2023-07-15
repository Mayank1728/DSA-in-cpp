/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

// Function to push an element into stack using two queues.
void QueueStack ::push(int x) {
  if (!q1.size()) {
    q1.push(x);
    while (q2.size()) {
      q1.push(q2.front());
      q2.pop();
    }
  } else {
    q2.push(x);
    while (q1.size()) {
      q2.push(q1.front());
      q1.pop();
    }
  }
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop() {
  if (!q1.size() && !q2.size()) {
    return -1;
  }
  int num;
  if (q1.size()) {
    num = q1.front();
    q1.pop();
  } else {
    num = q2.front();
    q2.pop();
  }
  return num;
}