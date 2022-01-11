// C++ program to see if two trees are identical
#include <bits/stdc++.h>
using namespace std;
class node 
{ 
    public:
    int data; 
    node* left; 
    node* right; 
}; 

/* Helper function that allocates a new node with the 
given data and NULL left and right pointers. */
node* newNode(int data) 
{ 
    node* Node = new node();
    Node->data = data; 
    Node->left = NULL; 
    Node->right = NULL; 

    return(Node); 
} 
int equalTrees(node* a, node* b) 
{ 
    /*1. both empty */
    if (a == NULL && b == NULL) 
        return 1; 

    /* 2. both non-empty -> compare them */
    if (a != NULL && b != NULL) 
    { 
        return
        ( 
            a->data == b->data && 
            equalTrees(a->left, b->left) && 
            equalTrees(a->right, b->right) 
        ); 
    } 
    /* 3. one empty, one not -> false */
    return 0; 
} 

int A() 
{ 
    node *root1 = newNode(1); 
  
    root1->left = newNode(2); 
    root1->right = newNode(3); 
    root1->left->left = newNode(4); 
    root1->left->right = newNode(5); 

    node *root2 = newNode(1); 

    root2->left = newNode(2); 
    root2->right = newNode(3); 
    root2->left->left = newNode(4); 
    root2->left->right = newNode(5); 
  
    if(equalTrees(root1, root2)) 
        cout << "Both tree are equal."<<endl; 
    else
        cout << "Trees are not equal."; 

return 0; 
} 

int B() 
{ 
    node *root1 = newNode(1); 
  
    root1->left = newNode(2); 
    root1->right = newNode(3); 
    root1->left->left = newNode(4); 
    root1->left->right = newNode(5); 

    node *root2 = newNode(1); 

    root2->left = newNode(2); 
    root2->right = newNode(3); 
    root2->left->left = newNode(4); 
    root2->left->right = newNode(2); 
  
    if(equalTrees(root1, root2)) 
        cout << "Both tree are equal."; 
    else
        cout << "Trees are not equal."; 

return 0; 
} 

int main()
{
  cout << "A.";
  A();
  cout << "B.";
  B();
  return 0;
}