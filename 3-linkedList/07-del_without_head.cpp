// head pointer NOT given, delete the node
void deleteNode(Node *del) {
  del->data = del->next->data;
  del->next = del->next->next;
}