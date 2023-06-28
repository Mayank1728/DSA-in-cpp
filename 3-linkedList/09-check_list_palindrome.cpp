class Solution {
public:
  // Function to check whether the list is palindrome.
  bool isPalindrome(Node *head) {
    if (head->next == NULL)
      return true;
    // finding the middle of the linkedlist
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;
    }
    // now reverse the linkedlist
    Node *prev = NULL, *curr = slow, *next;
    while (curr) {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    Node *start = head, *end = prev;
    while (start && end) {
      if (start->data != end->data)
        return false;
      start = start->next;
      end = end->next;
    }
    return true;
  }
};