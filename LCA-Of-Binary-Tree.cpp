#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
  T data;
  TreeNode<T> *left;
  TreeNode<T> *right;

  TreeNode(T data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
  if (root == NULL)
  {
    return -1;
  }
  if (root->data == x || root->data == y)
  {
    return root->data;
  }
  int leftAns = lowestCommonAncestor(root->left, x, y);
  int rightAns = lowestCommonAncestor(root->right, x, y);

  if (leftAns != -1 && rightAns != -1)
  {
    return root->data;
  }
  else if (leftAns != -1 && rightAns == -1)
  {
    return leftAns;
  }
  else if (leftAns == -1 && rightAns != -1)
  {
    return rightAns;
  }
  else
  {
    return -1;
  }
}

int main()
{
  TreeNode<int> *root = new TreeNode<int>(1);
  TreeNode<int> *node1 = new TreeNode<int>(2);
  TreeNode<int> *node2 = new TreeNode<int>(3);
  TreeNode<int> *node3 = new TreeNode<int>(4);
  TreeNode<int> *node4 = new TreeNode<int>(5);
  TreeNode<int> *node5 = new TreeNode<int>(6);

  root->left = node1;
  root->right = node2;
  node1->left = node3;
  node1->right = node4;
  node2->left = node5;

  cout << lowestCommonAncestor(root, 8, 9) << endl;

  return 0;
}