#include<iostream>
#include<cstring>
using namespace std;

void inline_factorial(int num)
{
    int result[200];
    memset(result, 0, 200*4);
    int number_of_digits=0;
    for(auto i=0; num>0; i++)
    {
        result[i]=num%10;
        num/=10;
        number_of_digits++;
    }
    int carry=0;
    int temp;
    int number_of_digits_in_answer=0;
    for(auto i=0; i<number_of_digits; i++)
    {
        temp=result[i]*(num-i-1)+carry;
        result[i]=temp%10;
        carry=temp/10;
        number_of_digits_in_answer++;
    }
    
    while(carry>0){
        result[number_of_digits_in_answer++]=carry%10;
        carry=carry/10;
    }
    for(auto i=(number_of_digits_in_answer-1); i>=0; i--){
        cout<<result[i];
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test_case;
    cin>>test_case;
    int num;        
    while(test_case--)
    {
        cin>>num;
        inline_factorial(num);
        cout<<"\n";
    }
    
    return 0;
}