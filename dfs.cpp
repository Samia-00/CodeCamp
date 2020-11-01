#include <iostream>
#include <vector>
#define UNVISITED 0
#define VISITED 1

using namespace std;

int N= 7;
vector<int> adj[7];
int cc;

vector<int> dfs_num(N,UNVISITED);

void dfs(int u){
    dfs_num[u] = VISITED;

    cout << cc << ": Visiting node " << u << endl;

    for(unsigned int i = 0; i < adj[u].size(); i++){
        int v = adj[u][i];

        if(dfs_num[v] == UNVISITED)
            dfs(v);
    }

    cout << "Number of components: " << cc << endl;

}

int main() {


    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(4);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(2);
    adj[4].push_back(1);
    adj[4].push_back(2);
    adj[5].push_back(6);
    adj[6].push_back(5);

    for(unsigned int i = 0; i < N; i++)
        for(unsigned int j = 0; j < adj[i].size(); j++)
            cout << i << "-->" << adj[i][j] << endl;

    cc = 0;
    for(unsigned int i = 0; i < N; i++){

        if(dfs_num[i] == UNVISITED){
            cc++;
            dfs(i);
        }

    }

	return 0;
}
