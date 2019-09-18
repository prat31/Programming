#include<stdio.h>
#include<stdlib.h>

struct bin_tree 
{
    int value;
    struct bin_tree *left;
    struct bin_tree *right;
};

typedef struct bin_tree node;

int count =1;

node *insert(node*, int);
void display  (node *);

node *root=NULL;

int main()
{
    node *root=NULL;
    int element, choice;
    printf("\n\t\tThis is linked list implementation of binary tree.\n");

    while(1)
    {
        printf("\n\nPlease select and option : ");
        printf("\n\t1  :  Insert");
        printf("\n\t2  :  Display");
        printf("\n\t3  :  Exit\n");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("\n\nEnter the number to be inserted : ");
                scanf("%d", &element);
                root=insert(root, element);
                break;
            }
            case 2:
            {
                display(root);
                break;
            }

            case 3:
            {
                exit(1);
                break;
            }

            default:
            {
                printf("\n\nPlease select a valid option : ");
                break;
            }
        }


    }


}



node* insert(node *r, int n)
{
    if(r==NULL)
    {
        r=(node*)malloc(sizeof(node));
        r->value=n;
        r->left=NULL;
        r->right=NULL;
        count++;               
    }

    else
    {
        if(count%2==0)
            r->left=insert(r->left, n);
        else
        
            r->right=insert(r->right, n);        
    }

    return(r);
}

void display(node *r)
{
    if(r->left!=NULL)
        display(r->left);
    printf("\n%d", r->value);
    if(r->right!=NULL)
        display(r->right);
}
