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

void delete_head(int delete_count){
    for(int i=0; i<delete_count; i++){
        struct node *to_free= head;
        head=head->next;
        free(to_free);
    }
}
struct node * insert(int value){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data = value;
    return (temp);
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
    printf("\n\nEnter number of times to delete the head : ");
    scanf("%d", &delete_count);
    delete_head(delete_count);

    printf("\nThe values in linked list now are : \n");
    print_linked_list(head);
    
    return 0;
}