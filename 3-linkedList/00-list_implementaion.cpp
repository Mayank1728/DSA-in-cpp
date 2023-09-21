// LinkedList implementaion in cpp using classes and objects
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  Node *next;
  Node() {
    next = NULL;
    val = INT_MAX;
  }
  Node(int val) {
    // this is used to refer curr object
    this->val = val;
    next = NULL;
  }
};

class SinglyLinkedList {
public:
  Node *head;
  SinglyLinkedList() { head = NULL; }
  void push(int val) {
    if (head == NULL) {
      head = new Node(val);
    } else {
      Node *start = head;
      while (start->next != NULL) {
        start = start->next;
      }
      start->next = new Node(val);
    }
    cout << val << " Added" << '\n';
  }
  void shift() {
    if (head == NULL) {
      cout << "List is empty" << endl;
    } else {
      Node *temp = head;
      int val = temp->val;
      head = head->next;
      temp->next = NULL;
      delete temp;
      cout << val << " was deleted" << endl;
    }
  }
  int unshift(int val) {
    if (head == NULL) {
      head = new Node(val);
    } else {
      Node *temp = new Node(val);
      temp->next = head;
      head = temp;
    }
    cout << val << " was added" << endl;
    // this->print();
  }
  void print() {
    if (head == NULL) {
      cout << "LinkedList is empty!";
    } else {
      Node *start = head;
      cout << "Print Linkedlist: "
           << "\n";
      while (start != NULL) {
        cout << start->val << endl;
        start = start->next;
      }
    }
  }
  int pop() {
    Node *start = head;
    int val = INT_MAX;
    if (start == NULL) {
      cout << "No elements inside linkedlist" << endl;
    } else if (start->next == NULL) {
      val = start->val;
      delete start;
      head = NULL;
      cout << "Now LinkedList is empty" << endl;
    } else {
      while (start->next->next != NULL) {
        start = start->next;
      }
      Node *nodeToBeDeleted = start->next;
      val = nodeToBeDeleted->val;
      start->next = NULL;
      delete nodeToBeDeleted;
      cout << "Deleted Node " << val << '\n';
    }
    return val;
  }
  int search(int val) {
    if (head == NULL) {
      cout << "LinkedList is empty" << endl;
    } else {
      int index = 0;
      Node *start = head;
      while (start != NULL) {
        if (start->val == val) {
          cout << "Found at index " << index << endl;
          return index;
        }
        start = start->next;
        index++;
      }
    }
    cout << val << " was NOT FOUND!" << endl;
    return -1;
  }
  void reverse() {
    if (head == NULL) {
      cout << "LinkedList is empty!!";
    } else {
      Node *prev = NULL;
      Node *curr = head;
      Node *next;
      while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
      }
      head = prev;
      this->print();
    }
  }
};
int main() {
  SinglyLinkedList a;
  a.push(20);
  a.push(25);
  a.push(30);
  a.push(40);
  a.unshift(10);
  a.search(10);
  a.search(30);
  a.search(04);
  a.reverse();
  Node n;
  cout << n.val;
}
