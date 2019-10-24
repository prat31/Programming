#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;

void insert_at_end(int value){
    struct node *temp= (struct node *)malloc(sizeof(struct node));
    temp->data= value;
    if(head=NULL){
        head=temp;
        tail=temp;
        head->next=NULL;
    }

    else{
        tail->next=temp;
        temp->next= NULL;
        tail=temp;
    }
}

void print_linked_list(struct node *head){
    for(struct node *count=head; count!=NULL; count=count->next){
        printf("%d ", count->data);
    }
}

int main()
{
    int values;
    printf("Enter number of values to insert in linked list : ");
    scanf("%d", &values);
    for(int i=0; i<values; i++){
        int temp;
        printf("\nEnter %d value : ", i+1);
        scanf("%d", &temp);
        insert_at_end(temp);
    }

    printf("\n\nThe values in linked list are : \n");
    print_linked_list(head);

    return 0;
}
