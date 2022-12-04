#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int row , column ,index , index_row , index_column;
    int c = 0;
    int One_D_Array[50];

    cout<<"Index row =" ;
    cin>> index_row ;
    cout<<endl ;

    cout<<"Index column =" ;
    cin >> index_column ;
    cout<<endl ;

    cin >> row >> column ;

    int arr[row][column] ;

    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    int k = 0;
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j<column ; j++)
        {
            if(arr[i][j]!=0)
            {
                One_D_Array[k]=arr[i][j];
                k++;
                c++;
            }
        }
    }

    cout<<"Sparse matrix in 1D array :"<<endl ;
    for(int i = 0 ; i<c ; i++)
    {
        cout << One_D_Array[i] << " " ;
    }

    cout<<endl;

    index = (( index_row * (index_row - 1 )) / 2 ) + index_column ;

    cout<<"Sparse matrix element "<< index_row <<","<<index_column << " = " << One_D_Array[index-1] <<endl ;

    return 0 ;

}
