#include<stdio.h>

void DFS(int adj[9][9], int vertex, int visited[9]){

    printf("%d ", vertex);

    visited[vertex]=1;

    for(int i=0; i<9; i++){

        if(adj[vertex][i]==1&&visited[i]!=1)
            DFS(adj, i, visited);
    }

}

int main(){
    int adj[9][9]={0,0,0,0,0,0,0,0,0,
                   0,0,1,1,0,0,0,0,0,
                   0,1,0,0,0,1,1,0,0,
                   0,1,0,0,1,1,0,0,0,
                   0,0,0,1,0,1,0,0,0,
                   0,0,1,1,0,0,1,1,1,
                   0,0,1,0,0,1,0,0,1,
                   0,0,0,0,0,1,0,0,0,
                   0,0,0,0,0,1,1,0,0};
    int visited[9];
    for(int i=0; i<9; i++){
        visited[i]=0;
    }
    DFS(adj, 1, visited);
}