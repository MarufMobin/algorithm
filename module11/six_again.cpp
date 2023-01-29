#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N];
int indegree[N];
int nodes, edges;

void bfs( int node ){
    
    queue<int>q;
    for( int i = 0; i < edges; i++ ){
        if( indegree[edges] == 0 ){
            cout << i << " I " << endl;
            q.push( i );
        }
    }
    while( !q.empty() ){
        int head = q.front();
        // cout << head << " ";
        for( int adj_node : adj_list[head] ){
            if( --indegree[adj_node] == 0 ){
                q.push(adj_node);
                cout << adj_node << " Adj_node " << endl;
            }
        }
    }
}

int main(){

    cin >> nodes >> edges;
    
    // take edge connection
    for( int i = 0; i < edges; i++ ){
        int u, v;
        cin >> u >> v;

        // u -> v 
        adj_list[u].push_back( v );
    }

    
    for( int i = 0; i < nodes; i++ ){
        for( int adj_node : adj_list[i] ){
            indegree[adj_node]++;
        }
    }
    bfs( 1 );
    // for( int i = 0; i < nodes; i++ ){
    //     cout << i << indegree[i] << endl;
    // }
    return 0;
}