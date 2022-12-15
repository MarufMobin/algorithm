/* 
    Graph Representation 
    ------------------------
    Topic : Compare Matrix and List 

    When ,
    # no of node -> 10
    # no of edge -> 2 
            
            2
    0-----------1
            9
    4-----------5
            2
    0----------->1
            9
    4<-----------5
Adj Matrix 
--------------
matrix[0][1] = 2
matrix[1][0] = 2
matrix[4][5] = 9
matrix[5][4] = 9

Adj Matrix Weighted directed
----------------------------------
matrix[0][1] = 2
matrix[5][4] = 9

nxn -> matrix
Time Complexity -> O( n^2 )
Space Complexity -> O( n^2 )

Adj List 
----------
0--------> 1
             /  \
           2<---3

directed Graph 
0-> 1 
1 -> 2 
3 -> 2
3 -> 1 

adj_list[0] = {1}
adj_list[1] = {2}
adj_list[2] = {}
adj_list[3] = {1,2}

--------------------------------
Adj List 
----------
0--------> 1
             /  \
           2<---3

directed Graph Weighted 
      2
0------> 1 
     
      4
1 ------> 2 


       8
3 ------> 2


       7
3 ------> 1 

0-> ( 1, 2 )
1 -> ( 2, 4 )
2 -> 
3 -> ( 2, 8 ), ( 1, 7 )

adj_list[0] = {1}
adj_list[1] = {2}
adj_list[2] = {}
adj_list[3] = {1,2}


pair<int, int> variableName;
pair<int, int>(1,2)
adj_list[0].push_back( pair<int , int > )
variableName.first
variableName.second
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes = 4;
    vector<pair<int, int>>adj_list[nodes];
    // List Initialization 
    adj_list[0] = {{ 1, 2 }};
    adj_list[1] = {{ 2, 4 }};
    adj_list[2] = {};
    adj_list[3] = {{ 2, 8 }, { 1, 7 }};
    
    /*
    adj_list[0].push_back({ 1, 2 });
    adj_list[1].push_back({ 2,4 });
    adj_list[3].push_back({ 2, 8 });
    adj_list[3].push_back({ 1, 7 });
 */
    for( int i = 0; i < nodes; i++ ){
        cout << i <<" -> ";
        for( int j = 0; j < adj_list[i].size(); j++ ){
            cout << "( " << adj_list[i][j].first << ", " << adj_list[i][j].second << "), ";
        }
        cout<< endl;
    }
    return 0;
}