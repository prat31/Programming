#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* newNode(int data){
    struct node *temp = new struct node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return (temp);
};

void iterativePreorder(struct node* root){
    if(root==NULL)  return;

    stack<struct node*> nodeStack;  
    nodeStack.push(root);

    while(nodeStack.empty()==false){
        struct node *node=nodeStack.top();
        cout<<node->data<<" ";
        nodeStack.pop();

        if(node->right)
            nodeStack.push(node->right);
        if(node->left)
            nodeStack.push(node->left);
    }

}


void iterativeInorder(struct node *root){
    if(root==NULL)  return;
    stack<struct node*> nodeStack;
    // nodeStack.push(root);
    struct node *temp=root;
    while(temp!=NULL || nodeStack.empty()==false){
        while(temp!=NULL){
            nodeStack.push(temp);
            temp=temp->left;
        }
        temp=nodeStack.top();
        nodeStack.pop();

        cout<<temp->data<<" ";
        temp=temp->right;
    }
}



int main(){
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    iterativePreorder(root);
    cout<<endl;
    iterativeInorder(root);
    return 0;
}