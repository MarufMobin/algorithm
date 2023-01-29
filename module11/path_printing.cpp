#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N];
vector<int>level;
vector<int>visited;
vector<int>parent;
void print_path( int dst ){
    vector<int>path;
    path.push_back( dst );
}
void bfs( int src , int dst ){

    queue<int>q;
    q.push(src);
    
    level[src] = 0;
    visited[src] = true;

    while( !q.empty() ){

        int prnt = q.front();
        if( prnt == dst ){
            // print_path( dest );
            return;
        }
        q.pop();

        for( int i = 0; i < adj_list[prnt].size(); i++ ){
            
            int child = adj_list[prnt][i];
            if( !visited[child] ){
                visited[child] = true;
                q.push( child );
                level[child] = level[prnt] + 1;
                parent[child] = prnt;
            }

        }
    }
}

int main(){
    
    int nodes, edges;
    cin >> nodes >> edges;
    level.resize( nodes );
    visited.resize( nodes, false );
    parent.resize( nodes, -1 );

    while( edges-- ){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }   

    int src, dest;
    cin >> src >> dest;
    bfs( src , dest );
    return 0;
}

/* 44 Minit */