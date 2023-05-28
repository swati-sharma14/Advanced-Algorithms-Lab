#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <cmath>
using namespace std;

struct Edge {
    int destination,x,y;
};

void findShortestPath(vector<long long>& cost,vector<vector<Edge>>& graph) {
    long long n = graph.size();
    priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> vertices;
    vector<bool> visited(n, false);
    vertices.push(make_pair(0, 1));

    while (!vertices.empty()) {
        long long u = vertices.top().second;
        long long current_cost = vertices.top().first;
        vertices.pop();
        
        if (visited[u]) continue;

        for (long long i = 0; i < graph[u].size(); i++) {
            Edge edge = graph[u][i];
            long long v = edge.destination;
            long long direct_weight = edge.x + (edge.y / (cost[u] + 1));
            long long weight;
            long long val = ceil(sqrt(edge.y)) - 1;
            if (cost[u] >= val) {
                weight = direct_weight;
            }
            else {
                weight = val + edge.x + (edge.y / (val + 1)) - cost[u];
            }
            if (cost[u] + weight < cost[v]) {
                cost[v] = cost[u] + weight;
                vertices.push(make_pair(cost[v], v));
            }
        }
        
        visited[u] = true;
    }
}

int main() {
    long long n, m;
    cin >> n >> m;
    vector<vector<Edge>> graph(n+1);
    vector<long long> cost(n+1,LLONG_MAX);
    cost[0] = 0;
    cost[1] = 0;
    for(long long i = 0; i < m; i++){
        long long u, v, x, y;
        cin >> u >> v >> x >> y;
        graph[u].emplace_back(Edge{v, x, y});
        graph[v].emplace_back(Edge{u, x, y}); // Undirected graph
    }
    findShortestPath(cost, graph);
    if(cost[n]!=LLONG_MAX){
        cout << cost[n] << endl;
        return 0;
    }
    cout << "-1" << endl;

    return 0;
}
