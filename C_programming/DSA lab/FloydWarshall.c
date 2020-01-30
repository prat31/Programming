#include<stdio.h>

#define V 4
#define INF 99999

void printDistance(int dist[][V]){
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(dist[i][j]==INF){
                printf("%7s", "INF");
            }
            else
            {
                    printf("%7d", dist[i][j]);
            }
        }
        printf("\n");
    }
}

void floydWarshall(int graph[][V]){
    int dist[V][V];
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            dist[i][j]=graph[i][j];
        }
    }

    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(dist[i][k]+dist[k][j]<dist[i][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }

    printDistance(dist);
}

int main() 
{ 
    /* Let us create the following weighted graph 
            10 
       (0)------->(3) 
        |         /|\ 
      5 |          | 
        |          | 1 
       \|/         | 
       (1)------->(2) 
            3           */
    int graph[V][V] = { {0,   5,  INF, 10}, 
                        {INF, 0,   3, INF}, 
                        {INF, INF, 0,   1}, 
                        {INF, INF, INF, 0} 
                      }; 
  
    // Print the solution 
    floydWarshall(graph); 
    return 0; 
} 