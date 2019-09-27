#include<stdio.h>
#include<stdlib.h>

int migratoryBirds(int arr_count, int* arr) 
{
    int *count=(int*)malloc(6*sizeof(int));
    for(int i=0; i<6; i++)
    {
            count[i]=0;
    }
    for(int i=0; i<arr_count; i++)
    {
        count[arr[i]]++;
    }
    int ans=0;
    for(int i=1; i<=6; i++)
    {
        if(count[i]==count[ans])
        {
            if(i<ans)
            {    
                ans=i;
            }
        }
        if(count[i]>count[ans])
        {
          ans=i;
        }
    }

    return (ans);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    int x=migratoryBirds(n, arr);
    printf("%d", x);
    return 0;
}
