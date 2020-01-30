#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left, *right;
    int height;
};

int max(int a, int b){
    return a>b?a:b;
}

int height(struct node *N){
    if(N==NULL) return 0;
    else        return N->height;
}

struct node* newNode(int key){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->left=NULL;
    temp->right=NULL;
    temp->height=1;
    return temp;
}

struct node* rightRotate(struct node *y){
    struct node *x = y->left;
    struct node *T = x->right;
    x->right = y;
    y->left = T;
    x->height = max(height(x->left), height(x->right))+1;
    y->right = max(height(y->left), height(y->right))+1;
    return x;
}

struct node* leftRotate(struct node *x){
    struct node *y = x->right;
    struct node *t = y->left;
    y->left = x;
    x->right = T;
    x->height = max(height(x->right), height(x->left))+1;
    y->right = max(height(y->left), height(y->right));
    return y;
}

int getBalance(struct node* n){
    if(n==NULL) return 0;
    return height(n->left)-height(n->right);
}

struct node* insert(struct node *node, int key){
    if(node==NULL)  return (newNode(key));

    if(key<node->data)
        node->left = insert(node->left, key);
    if(key>node->data)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if(balance>1&&key<node->left->data)
        return rightRotate(node);
    if(balance<-1&&key>node->right->data);
        return leftRotate(node);
    if(balance>1&&key>node->left->data){
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    if(balance<-1&&key<node->right->data){
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}