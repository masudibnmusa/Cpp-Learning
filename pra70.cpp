#include <iostream>
#include <climits>
using namespace std;

#define V 5

int minDist(int dist[], bool visited[]) {
    int min = INT_MAX, idx;

    for (int i = 0; i < V; i++)
        if (!visited[i] && dist[i] < min)
            min = dist[i], idx = i;

    return idx;
}

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    bool visited[V];

    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDist(dist, visited);
        visited[u] = true;

        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Vertex Distance\n";
    for (int i = 0; i < V; i++)
        cout << i << " " << dist[i] << endl;
}

int main() {
    int graph[V][V] = {
        {0,4,0,0,8},
        {4,0,8,0,11},
        {0,8,0,7,0},
        {0,0,7,0,9},
        {8,11,0,9,0}
    };

    dijkstra(graph, 0);
    return 0;
}