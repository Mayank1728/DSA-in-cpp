#include <bits/stdc++.h>
using namespace std;

// implementation of circular queue
class Queue {
public:
  int front, rear;
  int *arr;
  int size;
  Queue(int size) {
    this->size = size;
    arr = new int[size];
    front = -1;
    rear = -1;
  }
  void push(int val) {
    // full, empty and normal
    if (empty()) {
      front++;
      rear++;
      arr[rear] = val;
    } else if (full()) {
      cout << "Queue is FULL!!" << endl;
    } else {
      rear = (rear + 1) % size;
      arr[rear] = val;
    }
  }
  void pop() {
    // empty, last element and normal
    if (empty()) {
      cout << "Queue is EMPTY!!" << endl;
    } else if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front = (front + 1) % size;
    }
  }
  bool empty() { return front == -1 && rear == -1; }
  bool full(){
    return (rear + 1 % size == front);
  }
};
int main() {
  Queue player(5);
  player.push(10);
  player.push(40);
  player.push(12);
  player.push(29);
  player.push(77);
}