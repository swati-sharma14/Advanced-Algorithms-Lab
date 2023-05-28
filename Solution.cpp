#include <iostream>
#include <vector>
using namespace std;


int mod = 1e9 + 7;

void coloring_ways(int u, vector<int> &visited, vector<vector<int>> &edges, long long color1_edges[], long long color2_edges[]){
    color1_edges[u] = 1;
    color2_edges[u] = 1;
    visited[u-1]=1;
    for(int i=0; i<edges[u].size(); i++){
        int v = edges[u][i];
        if(visited[v-1]==0){
            coloring_ways(v, visited, edges, color1_edges, color2_edges);
            color1_edges[u] = color1_edges[u] * color2_edges[v];
            color2_edges[u] = color2_edges[u] * (color1_edges[v] + color2_edges[v]);
            color1_edges[u] = color1_edges[u] % mod;
            color2_edges[u] = color2_edges[u] % mod;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> edges(n+1);
    vector<int> visited(n,0);
    long long color1_edges[n+1];
    long long color2_edges[n+1];
    int root = 1;
    int root_parent = 0;
    for(int i=1; i<n; i++){
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    coloring_ways(root, visited, edges, color1_edges, color2_edges);
    int ans = (int) (color1_edges[root] + color2_edges[root]);
    ans = ans % mod;
    cout << ans << endl;
    return 0;
}
