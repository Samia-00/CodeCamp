#include <iostream>
#include <vector>
#include <stack>

using namespace std;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> topsort;

void dfs(int u){
    visited[u] = true;

    for(unsigned i = 0; i < adj[u].size(); i++) if(!visited[adj[u][i]]) dfs(adj[u][i]);

    topsort.push_back(u);

}

int main() {
	int t,n,m,u,v,cc;

	cin >> t;

	while(t--){
	    cin >> n >> m;
	    cc = 0;

	    visited.clear();
        visited.assign(n+1, false);

        adj.clear();
        adj.resize(n+1);

        topsort.clear();

        while(m--) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        for(int i = 1; i <= n; i++) if(!visited[i]) dfs(i);

        visited.assign(n + 1, false);

        for (int i = n-1; i >= 0; --i){
            int u = topsort[i];

            if (!visited[u]) dfs(u),++cc;

        }
        cout << cc << endl;

	}


	return 0;
}
