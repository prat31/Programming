#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

void print_linked_list(struct node *head){
    for(struct node *count=head; count!=NULL; count=count->next){
        printf("%d ", count->data);
    }
}

struct node * insert(int value){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data = value;
    return (temp);
}

void delete_at_position(int position){
    if(position==0){
        struct node *temp=head;
        head=head->next;
        free(temp);
    }
    else{
        struct node *temp=head;
        for(int i=0; i<position-1; i++, temp=temp->next);
        temp->next=temp->next->next;
    }
    
}

int main(){
    head = insert(1);
    head->next = insert(2);
    head->next->next= insert(3);
    head->next->next->next = insert(4);
    head->next->next->next->next = insert(5);

    printf("The values in linked list are :");
    print_linked_list(head);

    int delete_count;
    printf("\n\nEnter number of nodes to delete : ");
    scanf("%d", &delete_count);
    int del_position;
    for(int i=0; i<delete_count; i++){
        printf("\nEnter position to delete : ");
        scanf("%d", &del_position);
        delete_at_position(del_position);
    }

    printf("\nThe values in linked list now are : \n");
    print_linked_list(head);
    
    return 0;
}