#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};

Node* insert(Node* root, int data){
    if(root==NULL){
        Node *temp = new Node(data);
        root=temp;
    }
    else if(data<root->data)    insert(root->left, data);
    else if(data>root->data)    insert(root->data, data);
    return root;
}   
void preorder(Node *root){
    if(root==NULL)  return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root=NULL;
    int t;
    cin>>t;
    int data;
    for(auto i=0; i<t-1; i++){
        cin>>data;
        insert(root, data);
    }
    preorder(root);
    return 0;
}