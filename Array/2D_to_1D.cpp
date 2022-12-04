#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int row = 3;
    int column = 3;
    int k;
    int c = 0 ;
    int arr_2D[row][column] , arr_1D[50];

    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cin >> arr_2D[i][j] ;
        }
    }

    cout << "2D array element :" << endl ;

    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cout << arr_2D[i][j] << " " ;
        }

        cout << endl ;
    }

    cout << endl;

    // Copy element

    for(int i = 0, k=0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++, k++)
        {
            arr_1D[k] = arr_2D[i][j] ;
        }
        arr_1D[k] = -1 ;
        k++ ;
    }

    cout << "1D array element :" << endl ;

    for(int i = 0 ; i < 12 ; i++)
    {
        cout << arr_1D[i] << " " ;
    }

    cout << endl;

    cout << "3rd row element = " ;

    for(int i = 0 ; i < 12 ; i++)
    {
         if(arr_1D[i] == -1)
         {
             c++ ;
             if(c == 2)
             {
             while(arr_1D[i+1] != -1)
             {
                cout << arr_1D[i+1] << " " ;
                i++;
             }
             break ;
             }
         }
    }

    return 0 ;

}
