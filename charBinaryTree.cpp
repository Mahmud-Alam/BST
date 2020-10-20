#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* left;
    Node* right;
    Node(){
        Node* left = NULL;
        Node* right = NULL;
    }
    Node(char value){
        data = value;
        left = NULL;
        right = NULL;
    }
    ~Node();
};

Node* charBinaryTree(char key){
    char value;
    Node* node = new Node(key);
    if(key=='X')
        return NULL;
    cout<<key<<"'s Left key: ";cin>>value;
    node->left = charBinaryTree(value);
    cout<<key<<"'s Right key: ";cin>>value;
    node->right = charBinaryTree(value);
}
void preOrder(Node* root){
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){
    if(root==NULL)
        return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    char key;
    cout<<"Input a root: ";cin>>key;
    Node* root = charBinaryTree(key);

    cout<<endl<<"InOrder traversal  : ";inOrder(root);
    cout<<endl<<"PreOrder traversal : ";preOrder(root);
    cout<<endl<<"PostOrder traversal: ";postOrder(root);
}
