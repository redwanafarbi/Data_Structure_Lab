#include<bits/stdc++.h>
using namespace std ;

int const SIZE = 5 ;
int Queue[SIZE] ;
int front = -1 , rear = -1 ;

int isFull();
int isEmpty();
void insert(int element);
int Delete();
void print();

int main()
{
    cout << "Elements inserted" << endl ;
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);

    for(int i = 0 ; i<SIZE ; i++)
    {
        cout << Queue[i] << " " ;
    }

    cout << endl ;

    cout << "Delete elements" << endl ;
    for(int i = 0 ; i<3 ; i++)
    {
        cout << Queue[i] << " " ;
    }
    cout << endl ;

    cout << "After deleting queue elements" << endl ;
    for(int i = 3 ; i<SIZE ; i++)
    {
        cout << Queue[i] << " " ;
    }

}

int isFull()
{
    if(front == 0 && rear == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(front == -1)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}

void insert(int element)
{
    if(isFull())
    {
       cout << "Queue is full" << endl ;
    }
    else
    {
        front = 0 ;
        rear++ ;
        Queue[rear] = element ;
    }
}

int Delete()
{
    if(isEmpty())
    {
        cout << "Queue is empty" << endl ;
    }

    else
    {
        int element = Queue[front];
        cout << Queue[front] << endl ;
        front++ ;
    }
}

