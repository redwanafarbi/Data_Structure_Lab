#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int arr[100] = {1,3,4,10,11,23,35,45,55,77};
    int position = 5;
    int item = 99 ;
    for(int i= 9 ; i>=position-1 ; i-- )
    {
        if(i!=position-1)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i+1]=arr[i];
            arr[i]=item ;
        }
    }
    cout<<"Array elements are : ";
    for(int i = 0 ; i<=10 ; i++)
    {
        cout<< arr[i] <<" " ;
    }
    return 0;
}
