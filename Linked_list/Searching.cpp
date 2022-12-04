#include <iostream>

using namespace std;

typedef struct node Node ;
struct node
{
    int data ;
    Node *next_pointer ;
};

Node *create_node();
void insert_in_ending (int value , Node **start);
void print_linkedList(Node *start);
void searching (int value , Node **start);

int main()
{
    int arr[] = {4,5,7,22,44,11,77,40};
    int length = 8;

    Node *start = NULL ;

    for(int i = 0 ; i < length ; i++)
    {
        insert_in_ending(arr[i], &start);
    }

    print_linkedList(start);

    searching(77, &start);
}

Node *create_node()
{
    Node *node = (Node *)malloc(sizeof(node));

    if(node == NULL)
    {
        cout << "Error while creating node" << endl ;
    }
    return node ;
}

void insert_in_ending(int value , Node **start)
{
    Node *current_node = *start;
    Node *new_node = create_node();

    if (current_node == NULL)
    {
        *start = new_node;
        current_node = new_node;
        current_node -> next_pointer = NULL;
    }

    while (current_node -> next_pointer != NULL)
    {
        current_node = current_node -> next_pointer ;
    }
    new_node -> data = value ;
    current_node -> next_pointer = new_node ;
    new_node -> next_pointer = NULL ;
}

void print_linkedList(Node *start)
{
    if(start == NULL)
    {
        cout << "Linked List is empty" << endl ;
        exit(1);
    }

    Node *current_node = start ;

    while (current_node != NULL)
    {
        cout << current_node -> data << " ";
        current_node = current_node -> next_pointer ;
    }

    cout << endl ;
}

void searching (int value , Node **start)
{
    Node *current_node = *start ;
    while (current_node != NULL)
    {
        if(current_node -> data == value )
        {
            cout << "Found item " << endl ;
            return ;
        }
        current_node = current_node -> next_pointer ;
    }
    cout << "Item not found " << endl ;
}
