#include<stdio.h>
#include<stdlib.h>

struct node{
    int key;
    struct node *left, *right;
};

struct node* newNode(int value){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->key=value;
    temp->left = NULL;
    temp->right = NULL;
    return NULL;
}

void inOrder(struct node *root){
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d  ", root->key);
        inOrder(root->right);
    }
}

struct node* search(struct node* root, int key) 
{ 
    if (root == NULL || root->key == key) 
       return root; 
     
    if (root->key < key) 
       return search(root->right, key); 
  
    return search(root->left, key); 
} 

struct node* insert(struct node *node, int value){
    if(node==NULL)  return newNode(value);

    if(value<node->key) node->left = insert(node->left, value);
    else if(value>node->key)  node->right = insert(node->right, value);
    return node;
}

struct node* minValueNode(struct node* node){
    struct node* current = node;
    while(current&&current->left!=NULL)
        current=current->left;
    return current;
}

struct node* deleteNode(struct node* root, int value){
    if(root==NULL)  return root;

    if(value<root->key) root->left = deleteNode(root->left, value);
    else if(value>root->key) root->right = deleteNode(root->right, value);

    else{

        if(root->left==NULL){
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);

    }
    return root;
}



int main(){
    struct node* root = NULL;
    root=insert(root, 10);
    root=insert(root, 20);
    root=insert(root, 30);
    root=insert(root, 40);
    root=insert(root, 50);
    printf("InOrder Traversal of the BST is : \n");
    inOrder(root);
    printf("\nEnter number to insert in the BST : ");
    int temp;
    scanf("%d", &temp);
    root=insert(root, temp);
    printf("\nInOrder Traversal of the BST after insertion is : ");
    inOrder(root);
    printf("\nEnter number to delete : ");
    scanf("%d", &temp);
    root=deleteNode(root, temp);
    printf("\nInOrder Traversal of the BST after deletion is : ");
    inOrder(root);
    return 0;
}