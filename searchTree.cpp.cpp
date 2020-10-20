#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
    Node(){
        left = NULL;
        right = NULL;
    }
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
    ~Node();
};

Node* createTree(int key){
    int value;
    Node* node = new Node(key);
    if(key == 1024)
        return NULL;
    cout<<key<<"'s Left key: ";cin>>value;
    node->left = createTree(value);
    cout<<key<<"'s RIght key: ";cin>>value;
    node->right = createTree(value);
}

void postOrder(Node* root){
    if(root==NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
