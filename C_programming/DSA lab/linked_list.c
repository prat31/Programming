#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node* next;
};

struct node *head=NULL, *tail=NULL;
void insert(int n);

void main()
{
    int n, x;
    printf("\nEnter number of elements : ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &x);
        insert(x);
    }

    printf("\nThe entered values in linked list are : \n");
    struct node *temp;
    for(temp=head; temp->next!=NULL; temp=temp->next)
    {
        printf("\n%d", temp->value);
    }
    printf("\n%d", temp->value);
}


void insert(int n)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        temp->value=n;
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->value=n;
        temp->next=NULL;
        tail->next=temp;
        tail=temp;
    }
}