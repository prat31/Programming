#include<stdio.h>
#include<stdlib.h>

struct BST 
{
    int info;
    struct BST *left, *right;
};

typedef struct BST node;


node *insert(node *, int);
void search(node*, int);
int del(node*, int);
void display(node*);


int main()
{
    node *root=NULL;
    int element, choice, num, flag;

    while(1)
    {
        printf("\n\nSelect an option : ");
        printf("\n1. Insert");
        printf("\n2. Search");
        printf("\n3. Delete");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1 :
        {
            printf("\nEnter the node value : ");
            scanf("%d", &element);
            root=insert(root, element);
            break;
        }

        case 2:
        {
            printf("\nEnter the element to be searched : ");
            scanf("%d", &num);
            search(root, num);
            break;
        }

        case 3:
        {
            printf("\nEnter the element to be deleted : ");
            scanf("%d", &num);
            flag=del(root, num);
            if(flag==1)
                printf("\nElement %d has been deleted from the list.", num);
            else
                printf("\n%d is not present in the list.", num);
            break;
        }

        case 4:
        {
            display(root);
            break;
        }

        case 5:
        {
            exit(1);
            break;
        }
            
        
        default:
        {
            printf("\nPlease enter a valid option.");
            break;
        }

        }   
    }
}



node *insert(node *r, int n)
{
    if(r==NULL)
    {
        r=(node*)malloc(sizeof(node));
        r->right=r->left=NULL;
        r->info=n;
    }

    else if(n<r->info)
        r->left=insert(r->left, n);
    else if(n>r->info)
        r->right=insert(r->right, n);
    else if(n==r->info)
        printf("\nDuplicate entry not allowed.");
    return (r);
}

void search(node *r, int n)
{
    if(r==NULL)
    {
        printf("\n%d is not present in the tree.", n);
        return ;
    }
    else if(r->info==n)
        printf("\nElement %d is present in the tree.", n);
    else if(n<r->info)
        search(r->left, n);
    else
        search(r->right, n);
    
}
