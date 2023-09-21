// recursive DFS
// preOrder, postOrder, inOrder
// recursion always stack memory

void preOrder(TreeNode *root) {
  if (root == NULL)
    return;
  cout << root->val << endl;
  preOrder(root->left);
  preOrder(root->right);
}

void inOrder(TreeNode *root) {
  if (!root)
    return;
  inOrder(root->left);
  cout << root->val << endl;
  inOrder(root->right);
}

void postOrder(TreeNode *root) {
  if (root == NULL)
    return;
  postOrder(root->left);
  postOrder(root->right);
  cout << root->val << endl;
}

void bfs(TreeNode *root) {
  if (root == NULL)
    return;
  queue<TreeNode *> q;
  q.push(root);
  while (q.size()) {
    TreeNode *curr = q.front();
    cout << curr->val << endl;
    if (curr->left)
      q.push(curr->left);
    if (curr->right)
      q.push(curr->right);
    q.pop();
  }
}