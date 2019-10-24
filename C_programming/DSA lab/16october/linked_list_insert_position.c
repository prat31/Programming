#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void insert_position(int value, int position){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    if(position==0){
        head=temp;
        temp->next=NULL;
    }
    else{
        struct node *count=head;
        for(int i=0; i<position-1; i++, count=count->next);
        temp->next= count->next;
        count->next=temp;
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
    insert_position(1, 0);
    insert_position(2, 1);
    insert_position(3, 2);
    insert_position(4, 3);
    insert_position(5, 4);

    printf("The values in linked list currently are : \n");
    print_linked_list(head);
    printf("\n\nEnter number of values to enter : ");
    scanf("%d", &values);

    for(int i=0; i<values; i++){
        int to_insert, position;
        printf("\nEnter %d value : ", i+1);
        scanf("%d", &to_insert);
        printf("\nEnter position : ");
        scanf("%d", &position);
        insert_position(to_insert, position);
    }
    printf("\nThe values in linked list are : \n");
    print_linked_list(head);

    return 0;
}
