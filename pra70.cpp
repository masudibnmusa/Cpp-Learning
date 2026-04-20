#include <iostream>
#include <climits>
using namespace std;

struct Edge {
    int u, v, w;
};

void bellman_ford(int V, int E, Edge edges[], int src) {
    int dist[V];

    for (int i = 0; i < V; i++) dist[i] = INT_MAX / 2;
    dist[src] = 0;

    for (int i = 1; i < V; i++) {
        for (int j = 0; j < E; j++) {
            if (dist[edges[j].u] + edges[j].w < dist[edges[j].v]) {
                dist[edges[j].v] = dist[edges[j].u] + edges[j].w;
            }
        }
    }

    // check negative cycle
    for (int j = 0; j < E; j++) {
        if (dist[edges[j].u] + edges[j].w < dist[edges[j].v]) {
            cout << "Graph contains negative-weight cycle";
            return;
        }
    }

    cout << "Vertex Distance\n";
    for (int i = 0; i < V; i++)
        cout << i << " " << dist[i] << endl;
}

int main() {
    Edge edges[] = {
        {0,1,6},{0,2,7},{1,2,8},{1,3,5},
        {1,4,-4},{2,3,-3},{2,4,9},{3,1,-2},
        {4,0,2},{4,3,7}
    };

    bellman_ford(5, 10, edges, 0);
    return 0;
}