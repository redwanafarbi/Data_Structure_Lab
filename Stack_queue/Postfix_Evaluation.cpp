#include<bits/stdc++.h>
#include<vector>
using namespace std ;

int const MAX = 10 ;
int Stack[MAX] ;
int top = -1;;
vector<int>digit ;

void push(int n);
int pop();
int isFull();
int isEmpty();
int addExactDigit();
int operation(char x);

int main()
{
    string postfix = "5,6,7+-";
    int length = postfix.length();

    for(int i = 0 ; i<length ; i++)
    {
        if(!(postfix[i] >= '0' && postfix[i] <= '9'))
        {
            addExactDigit();
        }
        if(postfix[i] >= '0' && postfix[i] <= '9')
        {
            digit.push_back(postfix[i] - '0');
        }
        else if(postfix[i] != ',')
        {
            operation(postfix[i]);
        }
    }

    cout << pop() << endl ;

}

int isFull()
{
    if(top == MAX)
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}

void push(int n)
{
    if(! isFull())
    {
        top++ ;
        Stack[top] = n ;
    }
    else
    {
        cout << "Stack is full" << endl ;
    }
}

int pop()
{
    if(! isEmpty())
    {
        int temp = Stack[top];
        top -- ;
        return temp ;
    }
    else
    {
        cout << "Stack is empty" << endl ;
    }
}

int addExactDigit()
{
    int length = digit.size();
    int value = 0 ;

    if(length != 0)
    {
    for(int i = length - 1, j = 1 ; i >= 0 ; i-- , j=j*10)
    {
        value = value + (digit[i] * j);
    }
    digit.clear();
    push(value);
    }
}

int operation(char x)
{
    int digit2 = pop();
    int digit1 = pop();

    switch(x)
    {
    case '+' :
        push(digit1 + digit2);
        break;
     case '-' :
        push(digit1 - digit2);
        break;
     case '*' :
        push(digit1 * digit2);
        break;
     case '/' :
        push(digit1 / digit2);
        break;
     case '^' :
        push(pow(digit1,digit2));
        break;
    }
}
