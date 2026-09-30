#include <iostream>
using namespace std;

struct node {
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
          cout << "Singly Linked List initialized!\n";
    }

    void enqueue(int x){
        node *cur = new node;
        cur -> val = x;
        cur -> next = NULL;

        if(head == NULL && tail == NULL){
            head = tail = cur;
            return;
        }
        tail-> next = cur;
        tail = cur;

    }

    void printList(){
        cout << "Singly Linked List : " ;

        node *cur = head;

        if(cur == NULL){
            cout << "List is Empty!\n";
            return;
        }

        while(cur != NULL){
            cout << cur-> val << " -> ";
            cur = cur -> next;
        }
        cout << "the NUll\n";

    }
};

int main(){
    SiglyLinkedList sl;

    sl.enqueue(14);
    sl.enqueue(24);
    sl.enqueue(34);
    sl.enqueue(44);


    sl.printList();
    return 0;
}
