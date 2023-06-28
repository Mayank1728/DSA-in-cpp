bool isCircular(Node *head) {
  Node *run = head->next;
  while (run) {
    if (run == head)
      return true;
    run = run->next;
  }
  return false;
}