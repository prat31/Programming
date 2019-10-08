#include<iostream>
using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        int number;
        cin>>number;
        int sum=0;
        int temp;
        while(number>0)
        {
            temp=number%10;
            sum=sum+temp;
            number=number/10;
        }
        cout<<sum<<endl;
    }

    return 0;
}