#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
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

void searchTree(int value, Node* root){
    if(root==NULL)
        return;
    if(root->data==value)
        cout<<endl<<"Value is found"<<endl;
    searchTree(value, root->left);
    searchTree(value, root->right);
}
int main(){
    int key,value;
    cout<<"Input a root: ";cin>>key;
    Node* root = createTree(key);

    cout<<endl<<"Input a value what you want to search: ";cin>>value;
    searchTree(value, root);
}
