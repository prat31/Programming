#include<stdio.h>

int removeAB(char str[1000000], int n ){
    bool found;
    while(1){
        found=false;
        for(int i=0; i<n; i++){
            if(str[i]=='a'){
                if(str[i+1]=='b'){
                    found= true;
                    for(int j=i; j<n; j++){
                        str[j]=str[j+2];
                    }
                    n=n-2;
                    if(n==0)    return 0;
                }
            }
        }
        if(!found)  return n;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    char str[1000000];
    gets(str);
    int ans=removeAB(str, n);
    printf("%d", ans);
    return 0;
}