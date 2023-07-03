class Solution {
public:
  Node *copyList(Node *head) {
    // insert clone nodes in between
    Node *start = head;
    while (start) {
      Node *tmp = new Node(start->data);
      tmp->next = start->next;
      start->next = tmp;
      start = tmp->next;
    }
    // copy arb pointer in the clone nodes
    start = head;
    while (start) {
      if (start->arb)
        start->next->arb = start->arb->next;
      start = start->next->next;
    }
    // unlock the nodes
    start = head;
    Node *clone = head->next, *dummy = clone;
    while (clone->next) {
      start->next = start->next->next;
      clone->next = clone->next->next;
      clone = clone->next;
      start = start->next;
    }
    start->next = NULL;
    return dummy;
  }
};