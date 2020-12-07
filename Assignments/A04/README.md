## Assignment 4 - Binary Trees

### Binary Search Trees problems on onlinejudge

12347 - Binary Search Tree
1264 - Binary Search Tree

### Overview
Find 2 problems that deal with Binary Search Trees in some way that are part of the onlinejudge set of problems.
Find multiple ways of implementing a Binary Search Trees in whichever language you are using. You should understand the implications of each method.

Use of pointers, struct node, adding points left or right based on points and the placement based on less than, greater than.

### Sample Binary Search Tree Code

```c++
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 

//creates a new node (temp) and return the node
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
}

//insert the node to BST 
struct node* insert(struct node* node, int key) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) 
      return newNode(key); 
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    /* return the (unchanged) node pointer */
    return node; 
} 

//recursive method to find the key
struct node* search(struct node* root, int key) 
{ 
    // Base Cases: root is null or key is present at root 
    if (root == NULL || root->key == key) 
       return root; 
     
    // Key is greater than root's key 
    if (root->key < key) 
       return search(root->right, key); 
  
    // Key is smaller than root's key 
    return search(root->left, key); 
} 
   
// A utility function to do inorder traversal of BST 
//print method
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d \n", root->key); 
        inorder(root->right); 
    } 
} 

int main() 
{ 
    /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
    struct node *root = NULL; 
    root = insert(root, 50); 
    insert(root, 30); 
    insert(root, 20); 
    insert(root, 40); 
    insert(root, 70); 
    insert(root, 60); 
    insert(root, 80); 
   
    // print inoder traversal of the BST 
    inorder(root); 
   
    return 0; 
} 
```
https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/
