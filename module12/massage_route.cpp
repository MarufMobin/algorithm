// Problem Link -> https://cses.fi/problemset/task/1667
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int>adj_list[N];
int visited[N], level[N];
int parent[N];

void bfs( int src ){
    
    visited[src] = 1;
    level[src] = 1;

    parent[src] = -1;

    queue<int>q;
    q.push(src);

    while( !q.empty() ){

        int head = q.front();
        q.pop();

        for( int adj_node : adj_list[head] ){
            
            if( visited[adj_node] == 0 ){

                parent[adj_node] = head;
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                q.push( adj_node );

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
        adj_list[u].push_back( v );
        adj_list[v].push_back(u);
    }

    int src = 1;
    bfs( src );

    int dest_node  = nodes;
    if( visited[dest_node] == 0 ) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    cout << level[dest_node] << endl;

    vector<int>path;

    int selected_node = dest_node;
    
    while( true ){
        path.push_back( selected_node);
        
        if( selected_node == src ){
            break;
        }

        selected_node = parent[selected_node];
    }

    reverse( path.begin(), path.end() );
    for( int node: path ){
        cout << node << " ";
    }
    cout << endl;
    
    return 0;
}