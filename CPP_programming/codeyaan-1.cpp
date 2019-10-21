#include<iostream>

using namespace std;

int main()
{
    int N, K;
    cin>>N>>K;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    int temp[N];
    for(int i=0; i<K; i++)
    {
        int *mid=(arr+N/2);

        //if(i==0)    mid=(arr+N/2);
        //else        mid=(temp+N/2);
        
        int y=0;
        for(int x=0; x<N/2; x++)
        {
            temp[y++]=arr[x];
            temp[y++]=mid[x];
        }
        for(int i=0; i<N; i++)
        {
            arr[i]=temp[i];
        }
    }
    for(int i=0; i<N; i++)
    {
        cout<<temp[i]<<" ";
    }
    return 0;
}