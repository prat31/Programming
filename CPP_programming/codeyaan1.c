#include<iostream>
//#include<stdio.h>


int main() {
    int N, K;
    cin>>N>>K;
    //scanf("%d %d", &N, &K);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        //scanf("%d", &arr[i]);
    }
    for(int s=0; s<K; s++)
    {
        int arr1[N/2], arr2[N/2];
        int x=0, y=0;
        for(int i=0; i<N; i++)
        {
            if(i<N/2)   arr1[x++]=arr[i];
            else        arr2[y++]=arr[i];
        }
        int i=0;
        for(int p=0; p<N/2; p++)
        {
            arr[i++]=arr1[p];
            arr[i++]=arr2[p];
        }
    }
    for(int i=0; i<N; i++)
    {
        //printf("%d ", arr[i]);
        cout<<arr[i]<<" ";
    }
    return 0;
}
