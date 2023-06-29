class Solution {
public:
  // Function to remove a loop in the linked list.
  void removeLoop(Node *head) {
    Node *fast = head, *slow = head;
    bool isCycle = false;
    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;
      if (fast == slow) {
        isCycle = true;
        break;
      }
    }
    if (isCycle) {
      Node *start = head, *cont = slow;
      if (cont == head) {
        // from end to oth index cycle exists
        while (cont->next != start) {
          cont = cont->next;
        }
      } else {
        while (start->next != cont->next) {
          start = start->next;
          cont = cont->next;
        }
      }
      cont->next = NULL;
    }
  }
};