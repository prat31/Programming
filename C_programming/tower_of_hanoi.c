#include<stdio.h>

void TOH(int n, char from, char to, char aux)
{
  if(n==1)
  {
    printf("\nMove disc 1 from rod %c to rod %c",from, to);
    return ;
  }
  TOH(n-1, from, aux, to);
  printf("\nMove disc %d from rod %c to rod %c",n, from, to);
  TOH(n-1, aux, to, from);
}



int main()
{
  int n;
  printf("\n\n\t\tWelcome to Tower of Hanoi.");
  printf("\n\nNote :\n1.There are three rods, 1,2 and 3 namely.\n2.Initially all discs are stacked in rod 1.\n3. All discs will be moved from rod 1 to rod 3, one at a time.\n\n");
  printf("Enter number of discs : ");
  scanf("%d", &n);
  TOH(n, '1', '2', '3');
  printf("\n\n");
  return 0;
}
