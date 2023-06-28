ListNode *reverseList(ListNode *head) {
  if (!head)
    return NULL;
  ListNode *prev = NULL, *curr = head, *next;
  while (curr) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
  // Time : O(N)
  // Space: O(1)
}