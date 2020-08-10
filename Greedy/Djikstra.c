#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define V 9

int minDistance(int distance[], bool visited[]) 
{
	int min = INT_MAX, min_idx;
	
	int i;
	for (i=0; i<V; i++)
	{
		if (!visited[i] && distance[i] <= min)
		{
			min = distance[i];
			min_idx = i;
		}
	}
	
	return min_idx;
}

void printResult(int distance[]) 
{ 
    printf("Vertex \t\t Distance from Source\n"); 
    
    int i;
	for (i = 0; i < V; i++) 
        printf("%d \t\t %d\n", i, distance[i]); 
} 

void Dijkstra(int matrix[V][V], int start)
{
	int distance[V];
	bool visited[V];
	
	int i;
	for (i=0; i<V; i++)
	{
		distance[i] = INT_MAX;
		visited[i] = false;
	}
	
	distance[start] = 0;
	
	for (i=0; i<V-1; i++)
	{
		int min_idx = minDistance(distance, visited);
		visited[min_idx] = true;
		int j;
		for (j=0; j<V; j++)
		{
			if (
				!visited[j] &&
				matrix[min_idx][j] &&
				distance[min_idx] != INT_MAX &&
				distance[min_idx] + matrix[min_idx][j] < distance[j]
			)
				distance[j] = distance[min_idx] + matrix[min_idx][j];
		}
	}
	
	printResult(distance);
}

int main ()
{
	
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } }; 
  
    Dijkstra(graph, 0); 
    
	return 0;
}
