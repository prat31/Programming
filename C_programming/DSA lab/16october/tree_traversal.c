#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* insert(int value){
    struct node *temp=(struct node *)malloc(sizeof(struct node));

    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;

    return(temp);
}

void preorder(struct node *temp){
    if(temp==NULL)  return;

    printf("%d ", temp->data);
    preorder(temp->left);
    preorder(temp->right);
}

void inorder(struct node *temp){
    if(temp==NULL)  return;

    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
}

void postorder(struct node *temp){
    if(temp==NULL)   return;
    
    postorder(temp->left);
    postorder(temp->right);
    printf("%d ", temp->data);
}


int main(){
    struct node *root = insert(1);
    root->left= insert(2);
    root->right=insert(3);
    root->left->left = insert(4);
    root->left->right = insert(5);
    root->right->left = insert(6);
    root->right->right = insert(7);

    printf("Pre-order traversal of the tree : \n");
    preorder(root);
    printf("\nIn-order traversal of the tree : \n");
    inorder(root);
    printf("\nPost-order traversal of the tree : \n");
    postorder(root);
    return 0;
}