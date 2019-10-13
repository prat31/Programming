#include<stdio.h>

int median(int *arr, int i, int d)
{
    if(d%2!=0)
    {
        return arr[(i-(d/2)-1)];
    }
    else
    {
        int median;
        //median = 
        return median; 
    }
    
}

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int trans[n];
    for(int i=0; i<n; i++){
        scanf("%d", &trans[i]);
    }
    int fraud=0;
    for(int i=d; i<n; i++){
        if(trans[i]>=2*median(trans, i, d)){
            fraud++;
        }
    }

    printf("%d", fraud);
    return 0;
}