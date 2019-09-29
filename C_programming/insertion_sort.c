//not correct
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}


void insertion_sort(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        while(j>=0 &&(arr[j]>arr[i]))
        {
            swap(&arr[i], &arr[j]);
            j--;
        }
    }
}

void display(int *arr, int n)
{
    printf("\nElements in ascending order are : \n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int *arr=(int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("\nEnter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    display(arr, n);
}