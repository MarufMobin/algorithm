#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int>adj_list[N];

bool detect_cycle( int node ){
    
    queue<int>q;
    visited[node] = 1;
    q.push( node );

    while( !q.empty() ){
        
        int head = q.front();
        q.pop();

        for( int adj_node : adj_list[head] ){
            if( visited[adj_node] == 0 ){
                bool got_cycle = detect_cycle( adj_node );
                if( got_cycle ){
                    return true;
                }
            }else if( visited[adj_node] == 1 ){
                return true;
            }
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
        adj_list[u].push_back( v );
    }
    
    int src = 0;
    bool cycle_exists = false;

    for( int i = 1; i <= nodes; i++ ){
        if( visited[i] == 0 ){
            bool got_cycle = detect_cycle( i );
            if( got_cycle ){
                cycle_exists = true;
                break;
            }
        }
    }

    if( cycle_exists ){
        cout << "Yes, Cycle are Exists" << endl;
    }else{
        cout << "No, There are no Cycle in the Graph" << endl;
    }
    return 0;
}