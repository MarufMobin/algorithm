/* 
    Graph  Representation
    =====================

    Topic : Adjacency List -> Linked List / C ++ Vector
                 0-------1 
                           / \
                        /      \
                      2 ------ 3     

    0 -> 1
    1 -> 0, 2, 3
    2 -> 1 , 3
    3 -> 1, 2
 */

#include<bits/stdc++.h>
using namespace std;
/* 
    Time Complexity 
    -> O( 1 ) + O( n ^ 2 ) + O( n ^ 2 ) = O( n ^ 2 )
   
    Space Complexity 
    -> O( 1 ) + O( n ) + O( n^2 ) + O( 1 ) = O( n^2 )
    
 */
int main(){
    int nodes = 4; 
    // O( 1 ) Time 
    // O( 1 ) Space 
    
    vector<int>adjacent_list[nodes];
     // O( 1 ) Time 
    //  Space O( n )

    // O( E * 2 ) -> O( E ) -> O( n ^ 2 ) Time 
    //  O( E * 2 ) -> O( E ) -> O( n ^ 2 ) Space
    adjacent_list[0] = { 1 };
    adjacent_list[1] = { 0, 2, 3 };
    adjacent_list[2] = { 1, 3 };
    adjacent_list[3] = { 1, 2 };

    // O( 2 * E ) -> O( E ) -> O( n ^ 2 ) Time  
    // O( 1 ) -> Space 
    for( int i = 0; i < nodes; i++ ){
        cout << i << " -> " ;
        for( int j = 0; j < adjacent_list[i].size(); j++ ){
            cout << adjacent_list[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}