/* 
    Graph Representation 
    ====================
    Topic : Adjacency Matrix -> 2D Array 

    // Grap 
    A---- B
            / \
           C---D

    // Replace Numaric Value Graph Incliment 
    0---- 1
            / \
           2---3

A -> 0
B -> 1
C -> 2
D -> 3

# Tatal Nodes = 4
# Total Edge = 4
# Undirected + Unweighted 

matrix -> # Number of Nodes & # Number of Nodes 
            -> 4 X 4

matrix[i][j] = 1
    if and only if ( i -> j )
    # if anly only if i to j direct going 

0----  1
        / \
       2---3
0 -> 1
1 -> 0
1 -> 2
2 -> 1
2 -> 3
3 -> 2
3 -> 1 
1 -> 3 

out put 
0 1 0 0 
1 0 1 1 
0 1 0 1 
0 1 0 0 

 */

#include<bits/stdc++.h>
using namespace std;
/* 
Total Time Complexity 
O(1) + O(1) + O( n^2) + O( n^ 2 ) = O( n^2 )   

Adj Matrix 
------------

Time Complexity -> O( n^2 )
Space Complexity -> O( n^2 )

 */
int main(){
    int nodes = 4; // O(1)

    // int matrix[nodes][nodes] = {}; // O( n^2 )
    //  n = # of nodes 
    int matrix[ nodes ][ nodes ] ; // O( n^2 )

    // There are two approch when we are every cell are insert 0 value first ( loop ) second ( initial = {0} )

    for ( int i = 0; i < nodes; i++ ){
        for( int j = 0; j < nodes; j++ ){
            matrix[i][j] = 0;
        }
    }

    
    // O( E ) //  E ->number of edge, max edge n ^ 2 hote pare ba O ( n ^ 2 ) because of left oo right a ( n x n ) ta node hote pare 

    // note : Adjacency metrix ar Worst case a hote pare O( n^2 ) time Complexity 
    
    matrix[0][1] = 1; // O(1)
    matrix[1][0] = 1; // O(1)

    matrix[1][2] = 1; // O(1)
    matrix[2][1] = 1; // O(1)

    matrix[2][3] = 1; // O(1)
    matrix[2][3] = 1; // O(1)

    matrix[3][1] = 1; // O(1)
    matrix[1][3] = 1; // O(1)
   

    /* if it's a Coplete Grap then we are using loop  
    and there are Connected all possible way 
    then it's Changing Complexity 
    not it's O( n^2 )
    */

   /* 
   if using this Loop then space Complexity are n^2

    for ( int i = 0; i < nodes; i++ ){
        for( int j = 0; j < nodes; j++ ){
            matrix[i][j] = 1;
        }
    } */

    // Print Matrix 
    // O( n ^ 2 ) 
    for ( int i = 0; i < nodes; i++ ){
        for ( int j = 0; j < nodes; j++ ){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}