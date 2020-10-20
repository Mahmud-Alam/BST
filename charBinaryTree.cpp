#include<bits/stdc++.h>
using namespace std;

class Node{
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
