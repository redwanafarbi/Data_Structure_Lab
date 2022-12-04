#include <iostream>
using namespace std;

int const MAX = 100;
int stack[MAX];
int top = -1;

void push(int n);
int pop();
int isEmpty();
int isFull();

int main()
{
    cout << "Push element in stack" << ": " ;
    push(3);
    push(6);
    push(9);
    push(12);
    push(15);
    push(18);
    for(int i = 0 ; i<6 ;i++)
    {
        cout << stack[i] << " ";
    }
    cout<<endl ;

    cout << "Pop element in stack" << ": " ;
    pop();
    pop();
    pop();
    pop();
    for(int i = 5; i>1 ;i--)
    {
        cout << stack[i] << " ";
    }
    cout<<endl ;
}

void push(int n)
{
    if (!isFull())
    {
        top++;
        stack[top] = n;
    }
    else
        cout << "Stack Full" << endl;
}

int pop()
{
    if (!isEmpty())
    {
        int temp = stack[top];
        top--;
        return temp;
    }
    cout << "Stack Empty" << endl;
    return -1;
}

int isEmpty()
{

    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{

    if (top == MAX)
        return 1;
    else
        return 0;
}
