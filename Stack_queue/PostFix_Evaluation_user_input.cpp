#include<bits/stdc++.h>
using namespace std ;

int const MAX = 100 ;
int Stack[MAX];
int top = 0 ;

void push(int n);
int pop();
int isFull();
int isEmpty();
void doOperation(char x);

int main ()
{
    string postfix ;
    cin >> postfix ;

    int length = postfix.length();

    for(int i = 0 ; i<length ; i++)
    {
        int temp;
        if(postfix[i] >= 'a' && postfix[i] <= 'z')
        {
            cout << "Value for " << postfix[i] << " = " ;
            cin >> temp ;
            for(int j = 0 ; j<length ; j++)
            {
                if(postfix[i] == postfix[j])
                {
                    postfix[j] = temp + '0';
                }
            }
        }
    }
    for(int i = 0 ; i<length ; i++)
    {
        if(postfix[i] >= '0' && postfix[i] <= '9')
        {
            push(postfix[i] - '0');
        }
        else
        {
            doOperation(postfix[i]);
        }
    }
    cout << pop() << endl ;
    return 0;
}

void push(int n)
{
    if(!isFull())
    {
        Stack[top] = n ;
        top++;
    }
    else
    {
        cout << "Stack is full" << endl ;
    }
}

int pop()
{
    if(!isEmpty())
    {
        int temp ;
        top-- ;
        temp = Stack[top] ;
        return temp ;
    }
    cout << "Stack is empty" << endl ;
    return -1 ;
}

int isFull()
{
    if(top == MAX)
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
    if(top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void doOperation(char x)
{
    int digit2 = pop();
    int digit1 = pop();

    switch(x)
    {
        case '+' :
            push(digit1 + digit2);
            break ;
        case '-' :
            push(digit1 - digit2);
            break ;
        case '*' :
            push(digit1 * digit2);
            break ;
        case '/' :
            push(digit1 / digit2);
            break ;
        case '^' :
            push(pow(digit1 ,digit2));
            break ;
    }
}
