#include <iostream>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, w;
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int parent[100], rnk[100];

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        if (rnk[a] < rnk[b]) swap(a, b);
        parent[b] = a;
        if (rnk[a] == rnk[b]) rnk[a]++;
    }
}

void kruskals_mst(Edge edges[], int E, int V) {
    sort(edges, edges + E, cmp);

    for (int i = 0; i < V; i++) {
        parent[i] = i;
        rnk[i] = 0;
    }

    int total = 0;
    cout << "Edge Weight\n";

    for (int i = 0; i < E; i++) {
        if (find(edges[i].u) != find(edges[i].v)) {
            unite(edges[i].u, edges[i].v);
            cout << edges[i].u << " - " << edges[i].v << " " << edges[i].w << endl;
            total += edges[i].w;
        }
    }

    cout << "Total weight: " << total;
}

int main() {
    Edge edges[] = {
        {0,1,2},{0,3,6},{1,2,3},{1,3,8},
        {1,4,5},{2,4,7},{3,4,9}
    };

    kruskals_mst(edges, 7, 5);
    return 0;
}