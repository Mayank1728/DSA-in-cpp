#include <bits/stdc++.h>
using namespace std;

// 0 1 2 3 4
// 1 3 8 6 2
//
class Queue {
public:
  int front, rear, size;
  int *arr;
  Queue(int size) {
    arr = new int[size];
    this->size = size;
    front = 0;
    rear = 0;
  }
  void push(int val) {
   // check whether queue is full
    if (front == rear || rear % size == front) {
      cout << "Queue overflow" << endl;
      return;
    }
   if(rear == size){
    rear = rear % size;
    arr[rear++] = val;
   }
   // check whether this will work
    arr[rear++] = val;
  }
  void pop() {
    if (front == rear) {
      cout << "Queue is empty" << endl;
      front = 0;
      rear = 0;
    }
    front++;
  }
  int top() {
    if (front == rear)
      cout << "Queue is Empty!!" << endl;
    else
      cout << arr[front] << endl;
  }
};
int main() {
  Queue player(5);
  player.push(10);
  player.push(40);
  player.push(12);
  player.push(29);
  player.push(77);
  player.pop();
  player.push(50);
  player.top();
}