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

int traverse(TreeNode<int> *root)
{
  // If node is leaf node then returns height as 1
  if (root->left == NULL && root->right == NULL)
    return 1;

  // If both children are not NULL
  // it checks for left and right recursively
  if (root->left && root->right)
  {
    int l = traverse(root->left);
    int r = traverse(root->right);

    if (l == -1 || r == -1 || l != r)
      return -1;

    return l + 1;
  }

  // This part checks for the child which is not NULL
  int rel;

  if (root->left)
  {
    rel = traverse(root->left);
  }

  if (root->right)
  {
    rel = traverse(root->right);
  }

  if (rel != -1)
    rel++;

  return rel;
}

int levelLeaf(TreeNode<int> *root)
{
  // If root is NULL then the tree is empty
  // so the condition satisfies.
  if (root == NULL)
    return true;
  if (traverse(root) == -1)
    return false;
  return true;
}

int main()
{
  TreeNode<int> *root = NULL;
  // Sample tree.
  root = new TreeNode<int>(1);
  root->left = new TreeNode<int>(2);
  root->right = new TreeNode<int>(3);
  root->left->left = new TreeNode<int>(-1);
  root->left->right = new TreeNode<int>(-1);
  root->right->left = new TreeNode<int>(-1);
  root->right->right = new TreeNode<int>(-1);

  cout << levelLeaf(root) << endl;
  return 0;
}