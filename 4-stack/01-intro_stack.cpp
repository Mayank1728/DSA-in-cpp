#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node(int val) {
    data = val;
    next = NULL;
  }
};
// head pointer will point to the last element everytime an element is pushed
// This way time for push as well as pop will be O(1)
class Stack {
  Node *head;

public:
  Stack() { head = NULL; }
  void push(int val) {
    Node *n = new Node(val);
    if (n == NULL) {
      cout << "Stack overflow" << endl;
      return;
    }
    if (head == NULL)
      head = n;
    else {
      n->next = head;
      head = n;
    }
  }
  int pop() {
    if (!head) {
      cout << "Stack underflow " << endl;
      return -1;
    }
    Node *temp = head;
    int data = temp->data;
    head = head->next;
    delete temp;
    cout << "Popped " << data << endl;
    return data;
  }
  int peek() {
    if (!head) {
      cout << "Stack underflow!" << endl;
      return -1;
    }
    cout << "Last element is " << head->data << endl;
    return head->data;
  }
  bool empty() { return head == NULL; }
};
int main() {
  Stack cost;
  cost.pop();
  cost.push(100);
  cost.push(150);
  cost.push(140);
  cost.push(10);
  cost.pop();
  cost.push(107);
  cost.push(11);
  cost.peek();
  cout << bool(cost.empty());
  cost.push(107);
  cost.push(11);
  cost.pop();
}