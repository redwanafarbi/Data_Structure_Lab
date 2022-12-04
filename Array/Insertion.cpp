#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int arr[100] = {10,22,25,30,40,60} ;
    int length = 6 ;
    int item = 54;

    for(int i = 5 ; i>=0 ; i--)
    {
        if(arr[i]>item)
        {
            arr[i+1]= arr[i];
        }
        else
        {
            arr[i+1] = item;
            break;
        }
    }

    cout<<"Array elements are: " ;

    for(int i = 0 ; i<=length ; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
