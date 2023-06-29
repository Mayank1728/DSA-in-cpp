class Solution {
public:
  void rearrangeEvenOdd(Node *head) {
    if (!head || !head->next || !head->next->next)
      return;
    Node *odd = head, *even = head->next;
    Node *f = odd, *s = even;
    while (s && s->next) {
      f->next = s->next;
      f = f->next;
      s->next = f->next;
      s = s->next;
    }
    f->next = even;
  }
};