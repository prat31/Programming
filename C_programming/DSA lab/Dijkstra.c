#include<stdio.h>
#include<limits.h>

#define V 9

int printSolution(int dist[]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    for (int i = 0; i < V; i++) 
        printf("%d \t\t\t\t %d\n", i, dist[i]); 
} 

int minDistance(int dist[], int pros[]){
    int min=INT_MAX, minIndex;
    for(int v=0; v<V; v++){
        if(pros[v]==0&&dist[v]<=min){
            min=dist[v];
            minIndex=v;
        }
    }
    return minIndex;
}

void dijkstra(int graph[V][V], int src){
    int dist[V];

    int pros[V];

    for(int v=0; v<V; v++){
        dist[v]=INT_MAX;
        pros[v]=0;
    }

    dist[src]=0;

    for(int count=0; count<V-1; count++){

        int u=minDistance(dist, pros);

        pros[u]=1;

        for(int v=0; v<V; v++){

            if(pros[v]==0&&graph[u][v]!=0&&dist[u]!=INT_MAX
                &&dist[v]>dist[u]+graph[u][v])

                dist[v]=dist[u]+graph[u][v];
        }
    }
    printSolution(dist);
}

int main(){
     int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    dijkstra(graph, 0); 
  
    return 0; 
}