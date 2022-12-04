#include<bits/stdc++.h>
using namespace std ;

typedef struct node Node ;
struct node
{
    int data ;
    Node *ptr ;
};

Node *create_node();
void insert_at_end(int value , Node **start);
void print_list (Node *start);
void delete_element(int value , Node **start);

int main()
{
    int arr[] = {5,10,15,20,25};
    int length = 5 ;
    Node *start = NULL ;

    for(int i = 0 ; i<length ; i++)
    {
        insert_at_end(arr[i] , &start);
    }

    print_list(start);

    delete_element(15,&start);
    delete_element(25,&start);
    delete_element(5,&start);
    delete_element(75,&start);

    print_list(start);

}

Node *create_node()
{
    Node *node = (Node *)malloc(sizeof(Node));

    if(node == NULL)
    {
        cout << "Error while creating node" << endl;
    }

    else
    {
        return node ;
    }
}

void insert_at_end(int value , Node **start)
{
    Node *new_node = create_node();

    new_node -> data = value ;
    new_node -> ptr = NULL ;

    if(*start == NULL)
    {
        *start = new_node ;
    }
    else
    {
    Node *current_node = *start ;
    while (current_node->ptr != NULL)
    {
        current_node = current_node -> ptr ;
    }
    current_node -> ptr = new_node  ;
    }
}

void delete_element(int value , Node **start)
{
    Node *current_node = *start;
    Node *next_node ;
    
    if( current_node -> data == value)
    {
        *start = current_node -> ptr ;
        return ;
    }
    while( current_node -> ptr != NULL )
    {
        next_node = current_node -> ptr ;
        if(next_node -> data == value)
        {
            current_node -> ptr = next_node -> ptr ;
            return ;
        }
        current_node = current_node -> ptr ;
    }
    cout << "Item Doesn't exist in the linked list" << endl ;
}

void print_list (Node *start)
{
    if( start == NULL)
    {
        cout << "Empty list" << endl ;
        return ;
    }

    Node *current_node = start ;
    while(current_node->ptr != NULL)
    {
        cout << current_node -> data << " " ;
        current_node = current_node -> ptr ;
    }
    cout << current_node -> data << endl ;
}
