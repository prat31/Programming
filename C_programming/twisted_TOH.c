//If there is one rod to be moved from 'from' to 'to'
//it cannot be done directly but requires to pass through aux too.
#include<stdio.h>

void twisted_TOH(int n, char from, char aux, char to)
{
    if(n==1)
    {
        printf("\nMove disc %d from %c to %c",n, from, aux );
        printf("\nMove disc %d from %c to %c",n, aux, to);
    }
    twisted_TOH(n-1, from, aux, to);
    printf("\nMove disc %d from %c to %c",n, from, aux );
    twisted_TOH(n-1, to, aux, from);
    printf("\nMove disc %d from %c to %c",n, aux, to );
    twisted_TOH(n-1, from, aux, to);
}

int main()
{
    int n;
    printf("\nEnter number of discs : ");
    scanf("%d", &n);
    twisted_TOH(n, 'A', 'B', 'C');
    return 0;
}