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
void merged_two(Node **start_A , Node **start_B);

int main()
{
    int A[] = {5,10,15,20,25};
    int B[] = {30,35,40,45,50};
    int length = 5 ;
    Node *start_of_A = NULL ;
    Node *start_of_B = NULL ;

    for(int i = 0 ; i<length ; i++)
    {
        insert_at_end(A[i] , &start_of_A);
    }
    cout << "1st Linked List" << endl ;
    print_list(start_of_A);


    for(int i = 0 ; i<length ; i++)
    {
        insert_at_end(B[i] , &start_of_B);
    }
    cout << "2nd Linked List" << endl ;
    print_list(start_of_B);

    cout << "Merged Linked_List" << endl ;
    merged_two(&start_of_A , &start_of_B);
    print_list(start_of_A);
}

Node *create_node()
{
    Node *node = (Node *)malloc(sizeof(Node));

    if(node == NULL)
    {
        cout << "Error while creating node" << endl;
        exit(1);
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

void merged_two(Node **start_A , Node **start_B)
{

    Node *current_node = *start_A ;
    while(current_node->ptr != NULL)
    {
        current_node = current_node->ptr ;
    }
    current_node->ptr = *start_B ;
}
