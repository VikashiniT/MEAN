#include <iostream>
using namespace std;
 
struct Node
{
    int data;
    Node *left;
    Node *right;
};
 
Node *create()
{
    Node *ptr = new Node();
    int item;
    cout<<"Enter data: ";
    cin>>item;

    if(item == -1)
        return NULL;
    
    else
    {
        ptr->data=item;
        
        cout<<"Left child of "<<item<<": ",item;
        ptr->left=create();
        
        cout<<"Right child of "<<item<<": ",item;
        ptr->right=create();
        return ptr;
    }
}
 
void preorder(Node *temp) //address of root Node is passed in t
{
    if(temp!=NULL)
    {
        cout<<temp->data<<" "; 
        preorder(temp->left); //preorder traversal on left subtree
        preorder(temp->right); //preorder traversal om right subtree
    }
}
 
int main()
{
    Node *root;
    root=create();
    cout<<"\nThe preorder traversal: ";
    preorder(root);
    return 0;
}