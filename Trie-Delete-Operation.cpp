#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
  TrieNode *children[26];
  bool isEnd;
  TrieNode()
  {
    isEnd = false;
    for (int i = 0; i < 26; i++)
      children[i] = NULL;
  }
};

TrieNode *deleteWord(TrieNode *root, string word)
{
  if (word.length() == 0)
  {
    root->isEnd = false;
    return root;
  }
  TrieNode *curr;
  int index = word[0] - 'a';
  if (root->children[index] != NULL)
  {
    curr = root->children[index];
  }
  else
  {
    return NULL;
  }
  return deleteWord(curr, word.substr(1));
}

int main()
{
  TrieNode *root = new TrieNode();
  root->children[0] = new TrieNode();
  root->children[0]->children[1] = new TrieNode();
  root->children[0]->children[1]->children[2] = new TrieNode();
  root->children[0]->children[1]->children[2]->isEnd = true;
  root->children[0]->children[1]->children[2]->children[3] = new TrieNode();
  root->children[0]->children[1]->children[2]->children[3]->isEnd = true;
  root->children[0]->children[1]->children[2]->children[3]->children[4] = new TrieNode();

  root = deleteWord(root, "abcde");

  if (root->children[0]->children[1]->children[2]->isEnd == true)
  {
    cout << "Word abcde not deleted" << endl;
  }
  else
  {
    cout << "Word abcde deleted" << endl;
  }
  return 0;
}
