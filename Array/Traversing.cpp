#include<bits/stdc++.h>
#include<cmath>
using namespace std ;
int main (){

    int array_size ;
    cin>>array_size;

    int arr[array_size];
    for(int i = 0 ; i<array_size ; i++){
        cin>>arr[i];
    }
    int maximum = arr[0] , minimum = arr[0] ;
    int total = 0 ;
    double average , sine_value ;

    for(int i = 0 ; i<array_size ; i++){
        maximum = max(maximum,arr[i]);
        minimum = min(minimum ,arr[i]);
        total = total+arr[i];
        cout<<"Sine value of "<<arr[i]<<"= " <<sin((arr[i]*3.1416)/180)<<endl ;
    }
    average = total / array_size ;
    cout<<"Maximum value is "<< maximum<<endl ;
    cout<<"Minimum value is "<< minimum<<endl;
    cout<<"Total = "<<total<<endl;
    cout<<"Average = "<<average<<endl;

}
