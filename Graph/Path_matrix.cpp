#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n;
    cout << "Number of nodes = " ;
    cin >> n ;
    cout << endl ;

    int sum = 0;
    int adjacency_Matrix[n][n];
    int copy_adjacency_Matrix[n][n];
    int multipy_Matrix[n][n];
    int sum_Matrix[n][n];

    // Input matrix
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cin >> adjacency_Matrix[i][j] ;
        }
    }

    // Copy adjacency matrix
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            sum_Matrix[i][j] = adjacency_Matrix[i][j] ;
            copy_adjacency_Matrix[i][j] = adjacency_Matrix[i][j] ;
        }
    }

    // find Br matrix
    for(int p = 1 ; p < n ; p++)
    {
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                for(int k = 0 ; k<n ; k++)
                {
                   sum = sum + (adjacency_Matrix[i][k] * copy_adjacency_Matrix[k][j]);
                }
                multipy_Matrix[i][j] = sum ;
                sum = 0 ;
            }
        }

        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                sum_Matrix[i][j] = sum_Matrix[i][j] + multipy_Matrix[i][j] ;
                copy_adjacency_Matrix[i][j] = multipy_Matrix[i][j] ;
            }
        }
    }

    //create path matrix
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(sum_Matrix[i][j] != 0)
            {
                sum_Matrix[i][j] = 1 ;
            }
        }
    }

    //print path matrix
    cout << "Path Matrix :" << endl ;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout << sum_Matrix[i][j]  << " " ;
        }
        cout << endl ;
    }

    //Check strongly connected or not
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(sum_Matrix[i][j] != 1)
            {
                cout << "Not strongly connected" << endl ;
                return 0;
            }
        }
    }
    cout << "Strongly connected" << endl ;
}
