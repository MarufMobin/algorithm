// link https://docs.google.com/document/d/1SM2Wcf15Am4JtTpghgV5EXSBOseibvNaiypUJXHzm8A/edit#
// 1 . How many edges does a tree with n nodes have?
/* 
    there are edge E = n - 1 
    because of there are no Cycle in a tree 
*/

// 2. How many edges does a complete graph with n nodes have?
/* 
    there are a Complete Graph nodes are n ( n - 1 )
 */

/* 
Convert the following Adjacency Matrix into an Adjacency List and draw the graph. 
(no need to code)

1 0 0 1
1 0 1 0
0 1 0 1
0 0 1 1

0 -> ( 0, 0 ) , ( 0, 1 )
1 -> ( 0, 1 ), ( 1, 2 )
2 -> ( 2, 1 ), ( 2, 3 )
3 -> ( 3, 2 ), ( 3, 3 )
*/
/* 
Convert the following Adjacency List into an Adjacency Matrix and draw the graph.
(no need to code)

A -> B, C
B -> B, A, D
C -> D, A
D -> A

// List to Matrix 
0 1 1 0
1 1 0 1
1 0 0 1
1 0 0 0

 */

/* 
Convert the following edge list of an undirected graph to its respective Adjacency List representation.

[
  [A, B, 1]
  [B, C, 3]
  [C, A, 2]
  [E, F, 9]
  [C, D, 1]
  [E, F, 7]
]

A -> ( A, B , 1 )
B -> ( B, C , 3 )
C -> ( C, A , 2 )
E -> ( E, F , 9 )
C -> ( C, D , 1 )
E -> ( E, F , 7 )

Answer of the Folloing Qustions :
-> weighted 
-> yes Cyrcle 
-> yes possible 
-> there are cycle that's why there are not tree if remove some node then it\s convert a tree
-> Not Undestand

 */