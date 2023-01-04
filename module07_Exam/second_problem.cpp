#include <bits/stdc++.h>
using namespace std;

int main()
{
    // n = number of nodes
    // m = number of edges
    int n, m;   
    cin >> n >> m;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
    }

    cout << "Output the number of edges when it's not remove any edeges" << endl;
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
   }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 1)
            {
                if (matrix[j][i] != 1)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    cout << "Output the number of edges when remove edges " << endl;
   for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
   }
    return 0;
}
