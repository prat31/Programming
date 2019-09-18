#include<stdio.h>
#include<stdlib.h>


//Merge function
void Merge(int *beg, int s1, int *mid, int s2)
{
    int i=0, j=0, k=0;
    int *temp=(int*)malloc((s1+s2)*sizeof(int));
    while(i<s1&&j<s2)
        temp[k++]=(beg[i]<mid[j])?beg[i++]:mid[j++];
    while(i<s1)
        temp[k++]=beg[i++];
    while(j<s2)
        temp[k++]=mid[j++];
    for(int i=0; i<k; i++)
        beg[i]=temp[i];
    free(temp);    
}

//Merge sort recursive function
void MergeSort(int* arr, int size)
{
    if(size==1)
        return;
    else
    {
        int mid;
        mid=size/2;
        MergeSort(arr, mid);
        MergeSort(arr+mid, size-mid);
        Merge(arr, mid, arr+mid, size-mid);
    }
    
}


//driver function
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
    
    MergeSort(arr, n);
    printf("\n\nThe elements in ascending order are :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}