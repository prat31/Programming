#include<stdio.h>

int jumpingOnClouds(int c_count, int* c) {
    int jump=0;
    for(int i=0; i<c_count-1;){
        if(i<c_count-2&&c[i+2]==0){
            i=i+2;
            jump++;
        }
        else if(c[i+1]==0){
            i=i+1;
            jump++;
        }
    }
    return jump;

}


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", jumpingOnClouds(n, arr));
    return 0;
}