#include <iostream>
using namespace std;

struct node {
   int val;
   node* left;
   node* right;
};

node* createNewNode(int x)
{
    node* tree = new node;
    tree->val = x;
    tree->left  = nullptr;
    tree->right = nullptr;

    return tree;
}

void bstInsert(node* &root, int x)
{
    if(root == nullptr) {
        root = createNewNode(x);
        return;
    }

    if(x < root->val)
    {
        if(root->left == nullptr) {
            root->left = createNewNode(x);
            return;
        } else {
            bstInsert(root->left, x);
        }
    }

    if( x > root->val )
    {
        if(root->right == nullptr) {
            root->right = createNewNode(x);
            return;
        } else {
            bstInsert(root->right, x);
        }
    }
}

void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        inorder(root->right); 
        cout<<root->val<<endl;
    } 
} 

int main()
{
  node* root = nullptr;
  int num;
  while(cin>>num){
    bstInsert(root, num);
  }

  inorder(root);

  return 0;
}
