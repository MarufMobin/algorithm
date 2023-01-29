#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N];
int visited[N];

stack<int>node_stack;

void bfs( int node ){
    queue<int>q;
    q.push( node );

    while( !q.empty() ){
        int head = q.front();

        for( int adj_node : adj_list[head] ){
            if( visited[adj_node] == 0 ){
                visited[adj_node] = 1;
                q.push( adj_node );
            }
        }
    }
    node_stack.push(node);
}

int main(){
    int nodes, edges;
    cin >> nodes >> edges;

    for( int i = 0; i < edges; i++ ){
        int u , v;
        cin >> u >> v;
        adj_list[u].push_back( v );
    }


    for( int i = 1; i <= nodes; i++ ){
        if( visited[i] == 0 ){
            bfs( i );
        }
    }
    
    while( !node_stack.empty() ){
        cout <<  node_stack.top() << " ";
        node_stack.pop();
    }

    return 0;
}