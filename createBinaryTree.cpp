#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(){
        left = NULL;
        right =NULL;
    }
    Node(int value){
        data  = value;
        left = NULL;
        right = NULL;
    }
    ~Node();
};
 Node* createBinaryTree(int key){
     int value;
     Node* node = new Node(key);
     if(key == 1024) return NULL;
     cout<<key<<" Left key : ";cin>>value;
     node->left = createBinaryTree(value);
     cout<<key<<" Right key: ";cin>>value;
     node->right = createBinaryTree(value);
}
void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(Node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){
    int key;
    cout<<"Input a root: "; cin>>key;
    Node* root = createBinaryTree(key);
    cout<<endl<<endl<<"In-Order  : ";
    inOrder(root);
    cout<<endl<<endl<<"Pre-Order : ";
    preOrder(root);
    cout<<endl<<endl<<"Post-Order: ";
    postOrder(root);
    cout<<endl<<endl;
}
