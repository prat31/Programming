#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL, *tail=NULL;

void insert(int value){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=value;
    if(head==NULL){
        head=temp;
        head->next=NULL;
        tail=temp;
    }
    else{
        tail->next = temp;
        tail=temp;
        tail->next=NULL;
    }
}

void delete(int value){
    struct node *temp;
    if(head->data==value){
        temp=head;
        head=head->next;
        free(temp);
    }
    else{
        for(struct node *i =head; i->next!=NULL; i=i->next){
            if(i->next->data==value){
                temp=i->next;
                i->next = i->next->next;
                free(temp);
            }
        }
    }
    return;
}

void printLinkedList(){
    for(struct node* i=head; i!=NULL; i=i->next){
        printf("%d ", i->data);
    }
    return;
}
void search(int value){
    if(head==NULL){
        printf("\nThe linked list is empty.");
        return;
    }
    struct node *temp = head;
    while(temp!=NULL){
        if(temp->data = value){
            printf("\nThe value %d is present in the linked list.", value);
            return;
        }
    }
    printf("\nThe value is not present in the linked list.");
    return;
}
int main(){
    printf("This is a program for singly linked list.");
    while(1){
        printf("\nEnter 1 for adding an element.");
        printf("\nEnter 2 for deleting an element.");
        printf("\nEnter 3 for searching an element.");
        printf("\nEnter 4 for printing the values in the linked list.");
        printf("\nEnter 5 to exit.");
        int choice;
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        int temp;
        switch(choice){
            case 1:
                printf("\nEnter element to insert : ");
                scanf("%d", &temp);
                insert(temp);
                break;
            case 2:
                printf("\nEnter element to delete : ");
                scanf("%d", &temp);
                delete(temp);
                break;
            case 3:
                printf("\nEnter element to search in the linked list : ");
                scanf("%d", &temp);
                search(temp);
                break;
            case 4:
                printf("\nThe values in the linked list are : ");
                printLinkedList();
                break;
            case 5:
                exit(0);
        }
    }
}