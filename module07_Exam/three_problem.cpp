#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>adj_list[N];
int visited[N];

void BFS( int src ){
    queue<int>q;
    visited[src] = 1;
    q.push( src );

    while( !q.empty() ){

        int head = q.front();
        q.pop();

        for( int adj_node : adj_list[head] ){
            if( visited[adj_node] == 0 ){
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }
    }
}

int main(){
    int nodes, edges;
    cin >> nodes >> edges;

    for( int i = 0; i < edges; i++ ){
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 1;
    BFS( src );
    int counter = 1;

    for ( int i = 0; i < edges; i++ ){
        if( visited[i] == 0 ){
            BFS( visited[i] );
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}