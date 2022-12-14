/* 
    Graph Representation
    ====================

    Topic : Edge List
    0-------------1
                      / \
                   /      \
                 2------3

[
    [ 0, 1 ]
    [ 1, 2 ]
    [ 1, 3 ]
    [ 2, 3 ]
]

//  Weighted Edge list 
[
    [ 0, 1, 2 ],
    [ 1, 2, 4 ],
    [ 1, 3, 9 ],
    [ 2, 3, 1 ]
]
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int nodes = 4;

    //  Non Weighted 
    // vector<vector<int>> edge_list ={
    //     { 0, 1 },
    //     { 1, 2 },
    //     { 1, 3 },
    //     { 2, 3 }
    // };

    // Weighted Edge List are here 
    vector<vector<int>> edge_list ={
        { 0, 1, 2 },
        { 1, 2, 4 },
        { 1, 3, 9 },
        { 2, 3, 1 }
    };

    // O( E ) Time & Space Complexity and Worst Case ( O(n^2) )

    // edge_list.push_back({0,1});
    // edge_list.push_back({1,2});
    // edge_list.push_back({1,3});
    // edge_list.push_back({2,3});

    for ( int i = 0; i < edge_list.size(); i++ ){
        cout << edge_list[i][0] << "---" << edge_list[i][1] << " | " << edge_list[i][2] << endl;
    }
    return 0;
}