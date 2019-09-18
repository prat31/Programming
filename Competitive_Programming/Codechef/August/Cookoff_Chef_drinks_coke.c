#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int ans[t];
    int x=t;
    while(t--)
    {
        int n, m, k, l, r, counter=0, min=9999;
        scanf("%d %d %d %d %d", &n, &m, &k, &l, &r);
        int c[n], p[n];
        int *temp=(int *)calloc(n, sizeof(int));
        for(int i=0; i<n; i++)
        {
            scanf("%d", &c[i], &p[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(c[i]>k)
            {
                for(int j=0; j<m; j++)
                {
                    c[j]--;
                }
                if(l<r)
                {
                    if(c[i]>=l&&c[i]<=r)
                        temp[counter++]=p[i];
                }
                else if(l>r)
                {
                    if(c[i]<=l&&c[i]>=r)
                        temp[counter++]=p[i];
                }
            }
            else if(c[i]<k)
            {
                for(int z=0; z<m; z++)
                {
                    c[z]++;
                }
                if(l<r)
                {
                    if(c[i]>=l&&c[i]<=r)
                        temp[counter++]=p[i];
                }
                else if(l>r)
                {
                    if(c[i]<=l&&c[i]>=r)
                        temp[counter++]=p[i];
                }
            }

            else if(c[i]==k)
                temp[counter++]=p[i];
            for(int i=0; temp[i]!=0; i++)
            {
               if(temp[i]<min)
               {
                   min=temp[i];
               }
            }

            ans[x-t]=min;
        }
    }

    for(int i=0; i<t; i++)
    {
        if(ans[i]==0)
            ans[i]=-1;
    }
    for(int i=0; i<t; i++)
    {
        printf("\n%d", ans[i]);
    }

    return 0;


    
}