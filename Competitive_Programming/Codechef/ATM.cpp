#include<iostream>
#include<stdio.h>

int main(){
    float withdrawal;
    float balance;
    scanf("%f", &withdrawal);
    scanf("%f", &balance);
    if((int)withdrawal%5==0)
    {
        if(withdrawal+0.50<=balance)
        {
            withdrawal=withdrawal+0.50;
            printf("%.2f", balance-withdrawal);
        }
        else 
        {
            printf("%.2f", balance);
        }
    }
    else
    {
        printf("%.2f", balance);
    }
    
    return 0;
}