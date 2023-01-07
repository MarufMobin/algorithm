#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int>adj_list[N];
int visited[N];

void BFS( int src1, int src2 ){
    queue<int>q;

    visited[src1] = 1;
    visited[src2] = 1;
    
    q.push( src1 );
    q.push( src2 );
    
    while( !q.empty() ){
        
        // head related work are here
        int head = q.front();
        q.pop();

        cout << head << endl;

        for( int adj_node: adj_list[head] ){
            if ( visited[adj_node] == 0 ){
                visited[adj_node] = 1;
                q.push( adj_node );
            }
        }
    }
}
int main(){
    int nodes, edges;
    cin >> nodes >> edges;
    
    for( int i = 0; i < edges; i++ ){
        int u , v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src1 = 0, src2 = 4;
    BFS( src1, src2 );
    return 0;
}

/* 
Connected Nodes

0 -> 1, 4
1 -> 0, 4, 2
2 -> 1 , 3
3 -> 2, 4
4 -> 0, 1, 3

input 
5 6
0 1
0 4
1 4 
1 2
2 3
3 4
 */