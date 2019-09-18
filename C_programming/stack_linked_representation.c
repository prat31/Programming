#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int value;
    struct stack *next;
}stack;

stack *top=NULL;

void push(int);
void pop();
void print();

void main()
{
    int num1=0, num2=0, choice;
    while(1)
    {
        printf("\n\nPlease select an option : ");
        printf("\n[1] Push an element into the stack.");
        printf("\n[2] Pop an element from the stack.");
        printf("\n[3] Printf the contents of the stack.");
        printf("\n[4] Exit.\n");
        scanf("%d", &choice);        

        switch(choice)
        {
            case 1:
            {
                printf("\nEnter an element to push into the stack : ");
                scanf("%d", &num1);
                push(num1);
                break;                
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                print();
                break;
            }
            case 4:
            {
                exit(1);
                break;
            }
            default :
            {
                printf("\nPlease select a valid option.");
                break;
            }
        }
    }
}

void push(int n)
{
    stack *temp=(stack*)malloc(sizeof(stack));
    temp->value=n;
    temp->next=top;
    top=temp;
    printf("\n%d successfully popped into the stack.", n);
    return;
}

void pop()
{
    if(top==NULL)
    {
        printf("\n\nThe stack is empty.");
        return;
    }
    printf("\nPopping the top element of the stack : %d", top->value);
    top=top->next;
    return;
}

void print()
{
    if(top==NULL)
    {
        printf("\n\nThe stack is empty.");
        return;
    }
    else
    {
        printf("\n\nPrinting the elements of the stack.\n");
        for(stack *temp=top; temp!=NULL; temp=temp->next)
        {
            printf("%d\n", temp->value);
        }
    }
    return;
}