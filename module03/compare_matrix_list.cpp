/* 
    Graph Representation 
    ------------------------
    Topic : Compare Matrix and List 

    When ,
    # no of node -> 10
    # no of edge -> 2 

    0-----------1

    4-----------5
Adj Matrix 
--------------
matrix[0][1] = 1
matrix[1][0] = 1
matrix[4][5] = 1
matrix[5][4] = 1

nxn -> matrix
Time Complexity -> O( n^2 )
Space Complexity -> O( n^2 )

Adj List 
----------
0 -> 1
1 -> 0
2 -> 
3 ->
4 -> 5 
5 -> 4 
..........
vector<int>adjacent_list[n]; 
Time Complexity -> O( E )
Space Complexity -> O( E )

// O( E ) Time Complexity  -> if # no of edge low

adj[0] = {1}
adj[1] = {0}
adj[4] = {5}
adj[5] = {4}

 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}