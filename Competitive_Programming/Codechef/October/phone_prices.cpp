#include<iostream>

using namespace std;
/*int less(int *arr, int index)
{
    int answer=arr[index-1];
    for(int i=0; i<4; i++)
    {
        if(arr[index-i-2]<answer) answer=arr[index-i-2];
    }
    return answer;
}*/

int main()
{
    int test_case;
    cin>>test_case;
    int number_of_observations;
    int valid;
    while(test_case--)
    {
        cin>>number_of_observations;
        int arr[number_of_observations];
        for(int i=0; i<number_of_observations; i++)
        {
            cin>>arr[i];
        }

        valid=1;
        for(int i=1; i<number_of_observations; i++)
        {
            if(i==1){
                if(arr[i]<arr[0])   valid++;
            }
            if(i==2){
                if(arr[i]<arr[0]&&arr[i]<arr[1])   valid++;
            }
            if(i==3){
                if(arr[i]<arr[0]&&arr[i]<arr[1]&&arr[i]<arr[2]) valid++;
            }
            if(i==4){
                if(arr[i]<arr[0]&&arr[i]<arr[1]&&arr[i]<arr[2]&&arr[i]<arr[3])  valid++;
            }
            if(i>4)
            {
                //int x=less(arr, i);
                //if(arr[i]<x) valid++;
                if(arr[i]<arr[i-1]&&arr[i]<arr[i-2]&&arr[i]<arr[i-3]&&arr[i]<arr[i-4]&&arr[i]<arr[i-5])  valid++;      
            }
        }

        cout<<valid<<endl;
    }
}