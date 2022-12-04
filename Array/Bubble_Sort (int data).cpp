#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100] = {19,13,20,8,2};
    int length = 5 ;

    for(int i = 0 ; i<4 ; i++)
    {
       cout<<"Step "<< i+1 << ": " ;

       for( int j = 0 ; j < length-i-1 ; j++ )
       {
           if (arr[j] > arr[j+1])
           {
               swap (arr[j],arr[j+1]);
           }
           for(int r = 0 ; r < length ; r++)
           {
               cout<< arr[r] << " ";
           }
           cout << endl ;
       }
    }

    return 0 ;

}
