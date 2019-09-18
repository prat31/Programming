#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top=-1;

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
    if(top==99)
    {
        printf("\nThe stack is full.");
        return;
    }

    top=top+1;
    stack[top]=n;
    printf("\n%d successfully pushed to the stack.", n);
}

void pop()
{
    if(top==-1)
    {
        printf("\n\nThe stack is empty");
        return;
    }

    else 
    {
        printf("\n\nPopping out the top element : %d", stack[top]);
        top--;
        return;
    }
} 

void print()
{
    if(top==-1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    printf("\n\nPrinting the contents of the stack : \n");
    for(int i=top; i>=0; i--)
    {
        printf("%d\n", stack[i]);
    }
    return;
}