#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node *next;
        node(int value){
            data=value;
            next=NULL;
        }
};

struct node *head=NULL;
struct node *tail=NULL;

void insert(int value){
    if(head==NULL){
        head= new node(value);
        tail=head;
    }
    else{
        node *temp=new node(value);
        tail->next= temp;
    }
}

void delete_duplicates(node *head){
    if(head==NULL)  return;
    node *temp;
    for(temp=head; temp->next!=NULL; temp=temp->next){
        if(temp->data==temp->next->data){
            node *todelete = temp->next;
            temp->next=temp->next->next;
            free(todelete);
        }
    }
    return;
}


void print_linked_list(node *head){
    for(node *temp=head; temp!=NULL; temp=temp->next){
        cout<<temp->data<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin>>testCases;
    int numberOfValue;
    int value;
    while(testCases--){
        cin>>numberOfValue;
        while(numberOfValue--){
            cin>>value;
            insert(value);
        }   
    }
    delete_duplicates(head);
    print_linked_list(head);
    return 0;
}