#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr[100] = {"Anna","Harry","Babar","Karim","Domanico","Jack","Moon" ,"Sun","Star","Loop" };
    int length = 10 ;
    int position ;
    string item = "Karim";

    sort(arr,arr+10);

    cout<<"Sorted array : " ;

    for(int i=0 ; i<10 ; i++)
    {
        cout<<arr[i]<<" " ;
    }

    cout<<endl;

    for(int i = 0 ; i<10 ; i++)
    {
        if (arr[i] == item)
        {
            position = i ;
            break ;
        }
    }

    for(int j = position  ; j<10 ; j++)
    {
        arr[j] = arr[j+1];
    }

    cout<<"New array : " ;

    for(int i=0 ; i<9 ; i++)
    {
        cout<<arr[i]<<" " ;
    }

    return 0 ;

}
