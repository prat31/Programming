#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};


struct node* insert(int value){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    
    temp->data= value;
    temp->left = NULL;
    temp->right = NULL;

    return (temp);
}

int count_nodes(struct node *root){
    int count=1;
    if(root->left!=NULL){
        count =count + count_nodes(root->left);
    }

    if(root->right!=NULL){
        count = count + count_nodes(root->right);
    }
    
    return (count);
}

int count_leaf(struct node *root){
    int count=0;
    if((root->left==NULL)&&(root->right==NULL)){
        count = 1;
    }
    if(root->left!=NULL){
        count = count +count_leaf(root->left);
    }

    if(root->right!=NULL){
        count = count + count_leaf(root->right);
    }

    return (count);
}

int main()
{
    struct node *root = insert(1);
    root->left = insert(2);
    root->right = insert(3);
    root->left->left = insert(4);
    root->left->right = insert(5);
    root->right->left = insert(6);
    root->right->right = insert(7);

    printf("\nNumber of nodes in binary tree : %d", count_nodes(root));
    printf("\nNumber of lead nodes in binary tree : %d", count_leaf(root));

    return 0;
}