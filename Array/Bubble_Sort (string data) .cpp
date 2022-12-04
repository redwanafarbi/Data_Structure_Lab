#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string arr[100] = {"Ant","Horse","Cow","Spider","Duck","Bird"};
    int length = 6 ;

    for(int i = 0 ; i<5 ; i++)
    {
        cout << " Step " << i+1 << " : " ;

        for(int j = 0 ; j < length-i-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap (arr[j],arr[j+1]);
            }
            for(int r = 0 ; r<length ; r++ )
            {
                cout<<arr[r] << " ";
            }
            cout << endl ;
        }
    }

}
