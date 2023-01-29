#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N];
int visited[N];

void bfs( int node ){
    
    queue<int>q;
    q.push( node );
    visited[node] = 1;

    while( !q.empty() ){
    
        int head = q.front();
        q.pop();

        for( int adj_node : adj_list[head] ){
            
            if( visited[adj_node] == 0 ){
                bfs( adj_node );
            }

        }
    }
}

int main(){
    int nodes , edges;
    cin >> nodes >> edges;

    for( int i = 0; i < edges; i++ ){
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int comp = 0;
    int sourcetrack[N];
    int j = 0;
    for( int i = 1; i <= nodes; i++ ){
        
        if( visited[i] == 0 ){
            sourcetrack[j] = i;
            comp++;
            bfs(i);
            j++;
        }
    }

    cout << comp / 2 << endl;
    for( int i = 0; i < comp; i++ ){
        cout << sourcetrack[i] << " ";
    }

    return 0;
}

/* 
Djoin set

 */

 /* 
        React Dynamic ( 1 page )
            -> 5 section 180 - 200 $
        React Static ( 1 page )
            -> 5 section 100 $
        
        ----------------------
        Multiple page 
        Static -> per page 50 $
        Dynamic -> per page  70 $
        
        ------------------------
        
        E- Commerce 
        -> UI & Functionality per 5 page ( 200 - 400 $ )
        ->  Only UI Design per 5 page ( 100 - 300 $ )

        -----------------------------------------------
                                HTML CSS JS PHP 
        -----------------------------------------------
        -> per page 30 - 40 $
  */