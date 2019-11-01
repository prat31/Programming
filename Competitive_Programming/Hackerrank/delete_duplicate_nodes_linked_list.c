#include<stdio.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;

void insert(int value){
    if(head==NULL)
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testCases;
    cin>>testCases;
    int value;
    while(testCases--){
        cin>>value;
        insert(value);
    }
}