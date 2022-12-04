#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string arr[100] = {"Anna","Harry","Babar","Cartoon","Domanico","Jack","Moon"};
    int length = 7;
    int position = 5;
    string item = "Karim";

    for(int i = 7 ; i>=position-1 ;i--)
    {
        if(i!=position - 1)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i+1]=arr[i];
            arr[i]=item;
        }
    }

    cout<<"Array elements are : " ;

    for(int i=0 ; i<=8 ; i++)
    {
        cout<<arr[i]<<" " ;
    }
    return 0 ;
}
