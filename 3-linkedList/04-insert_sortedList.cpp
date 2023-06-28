Node *sortedInsert(struct Node *head, int data) {
  if (!head)
    return NULL;
  Node *m = new Node(data);
  if (head->data > data) {
    m->next = head;
    head = m;
    return head;
  }
  Node *curr = head, *prev;
  while (curr) {
    if (curr->data > data) {
      m->next = curr;
      prev->next = m;
      return head;
    }
    prev = curr;
    curr = curr->next;
  }
  prev->next = m;
  return head;
  // Time : O(N)
  // Space : O(1)
}