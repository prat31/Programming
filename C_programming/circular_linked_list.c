#include<stdio.h>
#include<stdlib.h>

struct node
{
  int value;
  struct node *next;
};
struct node *FIRST=NULL;
struct node *LAST=NULL;

void insert(int);
int delete(int);
struct node *search(int);
void print();

void main()
{
  int num1, num2, choice;
  struct node *loc;
  while(1)
  {
    printf("\n\nEnter you choice : \n");
    printf("1 --  Insert\n");
    printf("2 --  Delete\n");
    printf("3 --  Search\n");
    printf("4 --  Print\n");
    printf("5 --  Exit\n");

    scanf("%d", &choice);

    switch(choice)
    {
      case 1:
      {
        printf("\n\nEnter number to add : ");
        scanf("%d", &num1);
        insert(num1);
        printf("%d sucessfully added to the linked list", num1);
        break;
      }
      case 2:
      {
        printf("\n\nEnter number to delete : ");
        scanf("%d", &num1);
        num2=delete(num1);
        if(num2==-9999)
          printf("\n\n%d is not present in the linked list.", num1);
        else
          printf("\n\n%d has been deleted", num2);
        break;
      }
      case 3:
      {
        printf("\n\nEnter number to be searched : ");
        scanf("%d", &num1);
        loc=search(num1);
        if(loc==NULL)
          printf("\n\n%d is not present in the linked list.", num1);
        
        //if(loc==LAST)
        //  printf("\n\n%d is the last element in the linked list.", num1);
        //else
        printf("\n\n%d is present before %d in the linked list.", num1, (loc->next)->value);
        break;
      }
      case 4:
      {
        print();
        break;
      }
      case 5:
      {
        exit(1);
        break;
      }
      default :
      {
        printf("\n\nPlease choose a valid option.");
        break;
      }
    }

  }
}

void insert(int number)
{
  struct node *PTR=(struct node *)malloc(sizeof(struct node));
  PTR->value=number;
  if(FIRST==NULL)
  {
    FIRST=LAST=PTR;
    PTR->next=FIRST;
  }
  else
  {
    LAST->next=PTR;
    PTR->next=FIRST;
    LAST=PTR;
  }
}

int delete(int number)
{
  struct node *LOC, *TEMP;

  LOC=search(number);
  if(LOC==FIRST)
  {
    if(FIRST==LAST)
      FIRST=LAST=NULL;
    else
    {  
        FIRST=FIRST->next;
        return(number);
    }
  }

  for(TEMP=FIRST; TEMP->next!=LOC; TEMP=TEMP->next);
  
  TEMP->next=LOC->next;

  if(LAST==LOC)
  {
    LAST=TEMP;
    LAST->next=FIRST;
    return(number);
  }
  
  if(LOC==NULL)
    return(-9999);
}

struct node *search(int number)
{
  int i=number;
  struct node *TEMP;

  if(FIRST==NULL)
    return(NULL);
  for(TEMP=FIRST; TEMP!=LAST; TEMP=TEMP->next)
  {
    if(TEMP->value==i)
      return(TEMP);
  }

  if(LAST->value==i)
    return(LAST);
  
  return(NULL);
}
void print()
{
   if(FIRST==NULL)
  {
    printf("\n\nThe linked list is empty.");
    return;
  }
  else
  {  
    struct node *temp;
    printf("\n\nThe elements in the linked list are : ");
    for(temp=FIRST; temp!=LAST; temp=temp->next)
    printf("\n%d", temp->value);
    printf("\n%d", LAST->value); 
    return;
  }
}
