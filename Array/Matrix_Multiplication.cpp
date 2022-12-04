#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int row1 ,row2, column1 , column2 ,sum;
    sum = 0 ;

    cin >> row1 >> row2>> column1 >> column2 ;

    int arr1[row1][column1] , arr2[row2][column2] , mul[row1][column1]  ;

    cout<<"1st Matrix :" ;
    for(int i = 0 ; i<row1 ; i++)
    {
        for(int j = 0 ; j<column1 ; j++)
        {
            cin >> arr1[i][j] ;
        }
    }
    cout<<endl;

    cout<<"2nd Matrix : " ;
    for(int i = 0 ; i<row2 ; i++)
    {
        for(int j = 0 ; j<column2 ; j++)
        {
            cin >> arr2[i][j] ;
        }
    }
    cout<<endl;

    for(int i = 0 ; i<row1 ; i++)
    {
        for(int j = 0 ; j<column1 ; j++)
        {
            for(int k = 0 ; k<column2 ; k++ )
            {
                sum = sum + ( arr1[i][k] * arr2[k][j] ) ;
            }
            mul[i][j] = sum ;
            sum = 0 ;
        }
    }

    cout<<"New Matrix : "<<endl ;

    for(int i = 0 ; i<row1 ; i++)
    {
        for(int j = 0 ; j<column1 ; j++)
        {
            cout << mul[i][j] << " " ;
        }
        cout<<endl;
    }
    return 0;
}
