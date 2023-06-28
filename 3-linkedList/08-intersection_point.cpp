int intersectPoint(Node *head1, Node *head2) {
  // I need to find the no of nodes I need to skip
  // so that both pointers reach the intersection node

  Node *h1 = head1, *h2 = head2;
  int node1 = 0, node2 = 0;

  // len of h1
  while (h1) {
    node1++;
    h1 = h1->next;
  }

  // len of h2
  while (h2) {
    node2++;
    h2 = h2->next;
  }

  while (node1 > node2) {
    head1 = head1->next;
    node1--;
  }
  while (node2 > node1) {
    head2 = head2->next;
    node2--;
  }
  while (head1 && head2) {
    if (head1 == head2)
      return head1->data;
    head1 = head1->next;
    head2 = head2->next;
  }
  return -1;
}