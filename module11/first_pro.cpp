#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N] ;   
int level[N];

vector<int>adj_list[N];

void dfs( int source ){
    for( int adj_node: adj_list[source] ){
        if( visited[adj_node] == 0 ){
            cout << level[source] << " " << source << endl;
            level[ adj_node ] = min( level[ source ] + 1 , level[adj_node] );
            dfs( adj_node );
        }
    } 
}
int main(){
    int nodes, edges, source;
    cin >> nodes >> edges;

    for( int i = 0; i < edges; i++ ){
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }
    cin >> source;
    level[source] = 0;
    for(int i=0;i<=nodes;i++) level[i]=INT_MAX;
    level[source] = 0;
    dfs( source );

    for( int i = 1; i <= nodes; i++ ){
        cout << "Node " << i << " -> level : " << level[i] << endl;
    }

    return 0;
}