#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};
void print(Node *p) {
  while (p) {
    cout << p->data << endl;
    p = p->next;
  }
}
void insertAtStart(int val, Node **p) {
  cout << "Inserting at the start" << endl;
  Node *tmp = new Node();
  tmp->data = val;
  tmp->next = *p;
  *p = tmp;
  print(*p);
}
void insertEnd(int val, Node *p) {
  Node *start = p;
  cout << "Inserting val at the end" << endl;
  while (p->next) {
    p = p->next;
  }
  p->next = new Node();
  p->next->data = val;
  print(start);
}
void insertAt(int pos, int val, Node *p) {
  for (int i = 0; i < pos - 1; i++) {
    p = p->next;
  }
  Node *tmp = new Node();
  tmp->data = val;
  tmp->next = p->next;
  p->next = tmp;
  cout << "Insertion completed " << endl;
}
Node *reverse(Node *head) {
  if (head == NULL) {
    cout << "Linked List is empty!!" << endl;
    return NULL;
  }
  cout << "Reversed LinkedList" << endl;
  Node *p = NULL, *c = head, *n = head->next;
  while (c) {
    c->next = p;
    p = c;
    c = n;
    if (n)
      n = n->next;
  }
  print(p);
}
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  Node *s = new Node();
  Node *t, *tmp;
  t = s;
  t->data = 1;
  for (int i = 1; i < 5; i++) {
    t->next = new Node();
    t = t->next;
    t->data = arr[i];
  }
  print(s);
  // Insertion at the start
  insertAtStart(10, &s);
  // Insert at the end
  insertEnd(300, s);
  // Insertionat
  insertAt(0, 300, s);
  print(s);
  s = reverse(s);
  Node *p = new Node();
  p->data = 212;
  reverse(p);
}