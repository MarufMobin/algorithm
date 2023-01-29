#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
vector<int>adj_list[N];
int visited[N];

bool detect_cycle( int node ){
    
    visited[node] = 1;
    
    for( int adj_node : adj_list[node] ){       
        // When adj_node are not visited
        if( visited[adj_node] == 0 ){
            bool got_cycle = detect_cycle( adj_node );
            if( got_cycle ){
                return true;
            }
        }
        else if( visited[adj_node] == 1 ){
            return true;
        }
        else if( visited[adj_node] == 2 ){
            return true;
        }
    }

    visited[node] = 2;
    return false;
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
    
    // int src;
    // cin >> src;

    bool result = detect_cycle(  1 );
    if( result ){
        cout << "Yes there are Cycle ";
    }else{
        cout << "No, Impossible";
    }

    return 0;
}