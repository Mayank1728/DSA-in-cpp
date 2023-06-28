class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    if (!head)
      NULL;
    // figure out whether the list contains cycle
    ListNode *slow = head, *fast = head;
    bool isCycle = false;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (fast == slow) {
        isCycle = true;
        break;
      }
    }
    if (!isCycle)
      return NULL;
    ListNode *start = head, *cont = fast;
    while (start != cont) {
      start = start->next;
      cont = cont->next;
    }
    return start;
  }
  // Time : O(N)
  // Space : O(1)
};