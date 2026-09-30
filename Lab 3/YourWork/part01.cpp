#include <iostream>
using namespace std;

struct node 
{
    /* data */
    int val;
    node *next;
};

struct SiglyLinkedList
{
    /* data */
    node *head, *tail;

    SiglyLinkedList(){
        head = NULL;
        tail = NULL;

        cout << "Singly Linked List initialized!\n" ;
    }
};

int main(){
    SiglyLinkedList sl;

    return 0;
}

