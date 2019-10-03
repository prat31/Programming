#include<stdio.h>
#include<stdlib.h>

struct student
{
    int roll;
    char name[30];
    int DSAmarks;
};

void main()
{
    int n;
    printf("\nEnter number of students : ");
    scanf("%d", &n);
    struct student s[n];
    for(int i=0; i<n; i++)
    {
        printf("\nEnter student's %d name : ",i+1 );
        scanf("%s", &s[i].name);
        printf("\nEnter student's %d roll : ",i+1 );
        scanf("%d", &s[i].roll);
        printf("\nEnter student's %d DSA marks : ",i+1 );
        scanf("%d", &s[i].DSAmarks);
        printf("\n\n");
    }
    struct student temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((s[j].DSAmarks)<(s[i].DSAmarks))
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

    printf("\n\nThe list of students sorted according to marks is : \n");

    for(int i=0; i<n; i++)
    {
        printf("\nName=%s\tRoll=%d\tDSA marks=%d", s[i].name, s[i].roll, s[i].DSAmarks);
    }
    return;
}
