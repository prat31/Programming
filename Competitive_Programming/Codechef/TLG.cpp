#include<iostream>

using namespace std;

int main()
{
    int rounds;
    cin>>rounds;
    int a, b, sum_a=0, sum_b=0, max_a_lead=0, max_b_lead=0;
    while(rounds--){
        cin>>a>>b;
        sum_a=sum_a+a;
        sum_b=sum_b+b;
        if(sum_a>sum_b){
            if((sum_a-sum_b)>max_a_lead)    max_a_lead=sum_a-sum_b;
        }
        else{
            if((sum_b-sum_a)>max_b_lead)    max_b_lead=sum_b-sum_a;
        }
    }
    int w, l;
    if(max_a_lead>max_b_lead) w=1;
    if(max_b_lead>max_a_lead)   w=2;
    if(w==1)    l=max_a_lead;
    if(w==2)    l=max_b_lead;
    cout<<w<<" "<<l;   
}