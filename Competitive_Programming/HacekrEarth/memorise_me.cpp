#include<iostream>
//#include<bits/stdc++.h>

using namespace std;
void fastscan(int &number) 
{ 
    bool negative = false; 
    register int c; 
    number = 0; 
    c = getchar(); 
    if (c=='-') 
    { 
        negative = true; 
  
        c = getchar(); 
    } 
  
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    if (negative) 
        number *= -1; 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr_size;
    int query;
    //cin>>arr_size;
    fastscan(arr_size);
    int arr[arr_size];
    for(int i=0; i<arr_size; i++){
        //cin>>arr[i];
        fastscan(arr[i]);
    }
    //cin>>query;
    fastscan(query);
    int to_find;
    for(int i=0; i<query; i++){
        //cin>>to_find;
        fastscan(to_find);
        int count=0;
        for(int i=0; i<arr_size; i++){
            if(arr[i]==to_find) count++;
        }
        if(count==0)    cout<<"NOT PRESENT"<<"\n";
        else            cout<<count<<"\n";
    }
    return 0;
}