#include <bits/stdc++.h>
using namespace std;
class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    next = NULL;
  }
};
class Stack {
public:
  Node *head;
  Stack() { head = NULL; }
  void push(int data) {
    Node *n = new Node(data);
    n->next = head;
    head = n;
  }
  void pop() {
    if (!head) {
      cout << "Stack underFlow" << endl;
      return;
    }
    Node *tmp = head;
    head = head->next;
    delete tmp;
  }
  int peek() {
    if (!head) {
      cout << "Stack Empty" << endl;
      return -1;
    }
    cout << head->data << endl;
    return head->data;
  }
  bool isEmpty() { return head == NULL; }
};

int main() {
  Stack music;
  music.push(10);
  music.push(30);
  music.push(50);
  music.peek();
  music.pop();
  music.peek();
  music.pop();
  music.peek();
  music.push(100);
  music.peek();
}