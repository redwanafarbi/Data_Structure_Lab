#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int row , column ;

    cin >> row >> column ;

    int arr1[row][column] , arr2[row][column] , Addition[row][column]  ;

    cout<<"1st Matrix :" ;
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cin >> arr1[i][j] ;
        }
    }
    cout<<endl;

    cout<<"2nd Matrix : " ;
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cin >> arr2[i][j] ;
        }
    }
    cout<<endl;

    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
           Addition[i][j] = arr1[i][j] - arr2[i][j] ;
        }
    }

    cout<<"New Matrix : "<<endl ;

    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cout << Addition[i][j] << " " ;
        }
        cout<<endl;
    }

    return 0 ;
}

