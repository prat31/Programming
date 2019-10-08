#include<iostream>

using namespace std;

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

int main(){
    int test_cases;
    cin>>test_cases;
    int temp=test_cases;
    int number[test_cases];
    int i=0;
    while(test_cases--){
        cin>>number[i++];
    }

    MergeSort(number, temp);

    for(int i=0; i<temp;i++)
    {
        cout<<number[i]<<endl;
    }
    return 0;
}