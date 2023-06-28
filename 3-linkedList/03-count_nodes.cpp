class Solution {
public:
  // Function to count nodes of a linked list.
  int getCount(struct Node *head) {
    if (!head)
      return NULL;
    Node *s = head;
    int count = 0;
    while (s) {
      count++;
      s = s->next;
    }
    return count;
    // Time : O(N)
    // Space : O(1)
  }
};