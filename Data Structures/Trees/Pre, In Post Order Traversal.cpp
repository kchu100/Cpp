//Pre Order Traversal
root -> left -> right
//In Order Traversal
left -> root -> right
//Post Order Traversal
left -> right -> root

void preOrder(class Node* node)
{
  if(node == NULL)
      return;
  cout << node->data << ' ';
  preOrder(node->left);
  preOrder(node->right);
}

void inOrder(class Node* node)
{
  if(node == NULL)
      return;
  inOrder(node->left);
  cout << node->data << ' ';
  inOrder(node->right);
}

void postOrder(class Node* node)
{
  if(node == NULL)
      return;
  postOrder(node->left);
  postOrder(node->right);
  cout << node->data << ' ';
}
