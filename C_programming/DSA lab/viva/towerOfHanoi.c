#include<stdio.h>

int swaps =0;

void TOH(int n, char from, char aux, char to){
    swaps++;
    if(n==1){
        printf("\nMove disc 1 from %c to %c.", from, to);
        return;
    }
    TOH(n-1, from, to, aux);
    printf("Move disc %d from %c to %c.", n, from, to);
    TOH(n-1, aux, from, to);
}

int main(){
    int n;
    printf("Enter number of discs : ");
    scanf("%d", &n);
    TOH(n, '1', '2', '3');
    printf("\nTotal number of swaps : %d", swaps);
    return 0;
}