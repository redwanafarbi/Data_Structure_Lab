#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100]={10,20,30,40,50,60,70,80,90,100};
    int position = 2;

    for(int i = position-1 ;i<=10 ; i++)
    {
        arr[i] = arr[i+1];
    }

    cout<<"New array elements : ";

    for(int i = 0 ; i<9 ; i++)
    {
        cout<< arr[i] << " " ;
    }

    return 0 ;
}
