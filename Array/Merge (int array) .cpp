#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int arr1[50] = {1,3,5,7,9,11,13,15};
    int arr2[50] = {2,4,6,8,10};

    for(int i = 7, j = 0 ; i<13 , j<5 ; i++ ,j++)
    {
        arr1[i+1] = arr2[j] ;
    }

    cout<<"Array element after merging : " ;

    for(int i = 0 ; i<13 ; i++)
    {
        cout<<arr1[i]<< " " ;
    }

    return 0 ;
}
