#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int partition (int *arr, int low, int high)
{
    int pivot=arr[high];
    int i=low-1;

    for(int j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);

    return (i+1);
}

void QuickSort(int *arr, int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr, low, high);

        QuickSort(arr, low, pi-1);
        QuickSort(arr, pi+1, high);
    }
}

int main()
{
    int n;
    printf("\n\nEnter number of elements to be sorted : ");
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        printf("\nEnter element %d :    ", i+1);
        scanf("%d", &arr[i]);
    }
    
    QuickSort(arr, 0, n-1);
    printf("\n\nThe elements in ascending order are :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}








