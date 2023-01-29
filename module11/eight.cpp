#include<bits/stdc++.h>
using namespace std;

vector< pair<int, int> >edge_list;
vector<int>parent;

int find_parent( int x ){
    if( parent[x] == -1 ) return x; 
    return find_parent( parent[x] );
}

void union_operation( int a, int b ){
    int parentA = find_parent( a );
    int parentB = find_parent( b );
    parent[ parentA ] = parentB;
}

int main(){
    
    int nodes, edges;
    cin >> nodes >> edges;
    parent.resize(nodes,-1);

    for( int i = 0; i < edges; i++ ){
        int u, v;
        cin >> u >> v;
        edge_list.push_back({u,v});
    }
    
    bool cycle = false;
    int count = 0;
    vector<int>tr;
    for( int i = 0; i < edge_list.size(); i++ ){
        pair<int,int> pr = edge_list[i];
        
        int a, b;
        a = pr.first;
        b = pr.second;

        int parentA = find_parent( a );
        int parentB = find_parent( b );

        if( parentA == parentB ){
            cycle = true;
            break;
        }
        else{
            // parent[parentA] = parentB;
          union_operation( a, b );       
          
          count++;
        }
    }

    // if( cycle ){
    //     cout << "YES" << endl;
    // }else {
    //     cout << "NO" << endl;
    // }
    // cout << count << endl;
    for( int x : tr ){
        cout << x <<" ";
    }

    return 0;
}

