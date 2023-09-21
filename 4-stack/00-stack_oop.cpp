#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node() {
    this->val = 0;
    next = NULL;
  }
  Node(int val) {
    this->val = val;
    next = NULL;
  }
};
class myStack {
public:
  Node *head;
  myStack() { head = NULL; }
  // push, pop, top, isempty, print, size
  void push(int val) {
    Node *temp = new Node(val);
    if (head == NULL) {
      head = temp;
    } else {
      temp->next = head;
      head = temp;
    }
    cout << val << " was pushed"
         << "\n";
  }
  void pop() {
    if (head == NULL) {
      cout << "Cannot pop, Stack is empty!" << endl;
    } else {
      Node *temp = head;
      cout << temp->val << " was popped!" << endl;
      head = head->next;
      temp->next = NULL;
      delete temp;
    }
  }
  void print() {
    if (head == NULL) {
      cout << "Stack is empty!" << endl;
    } else {
      Node *start = head;
      while (start != NULL) {
        cout << start->val << endl;
        start = start->next;
      }
    }
  }
  int top() {
    if (head == nullptr)
      return -1;
    else
      return head->val;
  }
  bool isEmpty() { return size() == 0; }
  int size() {
    int size = 0;
    if (head != nullptr) {
      for (Node *i = head; i != nullptr; i = i->next) {
        size++;
      }
    }
    cout << "stack size is: " << size << endl;
    return size;
  }
};

int main() {
  myStack s;
  int i = s.top();
  cout << i << endl;
  bool is = s.isEmpty();
  cout << is << endl;
  s.pop();
  s.push(10);
  s.push(20);
  s.pop();
  s.push(30);
  s.size();
}
