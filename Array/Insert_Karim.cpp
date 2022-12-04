#include<bits/stdc++.h>
using namespace std ;

int main()
{
    string arr[100] = {"Hasnain","Farbi","Rahim","Vut"};
    int length = 4 ;
    string item = "Karim";

    sort(arr,arr+4);

    for(int i = length-1 ; i>=0 ; i--)
    {
        if(arr[i]>item)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i+1]=item;
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
