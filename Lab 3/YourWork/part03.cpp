#include <iostream>
using namespace std;

struct node {
    int val;
    node *next;
};

struct SiglyLinkedList {
    node *head, *tail;

    SiglyLinkedList(){
        head = NULL;
        tail = NULL;
          cout << "Singly Linked List initialized!\n";
    }

    void enqueue(int x){
        node *cur = new node;
        cur->val = x;
        cur-> next = NULL;

        if(head == NULL && tail == NULL){
            head = tail = cur;
            return;
        }
        tail->next = cur;
        tail = cur;
    }

    void printList(){
        cout << "Singly Linked List: ";

        node *cur = head;
        if(cur == NULL){
            cout << "List is Empty!\n";
            return;
        }

        while (cur != NULL)
        {
            /* code */
            cout << cur->val << " -> ";
            cur = cur->next;
        }
        cout << "THE NULL \n";
        
    }

    void insertAfterHead(int x){
        if(head == NULL){
            enqueue(x);
            return;
        }

        node *cur = new node;
        cur -> val = x;
        cur -> next = head -> next;
        head -> next = cur;

         if (head == tail) { 
            tail = cur;
        }
    }

    void insertBeforeTail(int x){
        if(head == NULL ||  head == tail){
            node *cur = new node;
            cur -> val = x;
            cur->next = head;
            head = cur;

             if (tail == NULL) tail = cur;
            return;

        }

        node *prev = head;
        while (prev-> next != tail)
        {
            /* code */
            prev = prev -> next;
        }
        
        node *cur = new node;

        cur -> val = x;
        cur -> next = tail;
        prev -> next = cur;
    }

    void insertAfterVal(int toFind, int toAdd){
        node *cur = head;

        while (cur != NULL && cur->val != toFind)
        {
            /* code */
            cur = cur -> next;
        }

        if(cur !=NULL){
            node *newnode = new node;
            newnode->val = toAdd;
            newnode->next = cur->next;

              cur->next = newnode;
            if (cur == tail) tail = newnode; 
        } else {
            cout << "value "<< toFind << " not found!\n";
        }
        
    }
};

int main(){
    SiglyLinkedList sl;

    sl.enqueue(10);
    sl.enqueue(30);
    sl.enqueue(20);

     cout << "After enqueue: ";

     sl.printList();

     sl.insertAfterHead(25);

      cout << "After insertAfterHead(25): ";

      sl.printList();

      sl.insertBeforeTail(35);
       cout << "After insertBeforeTail(35): ";
    sl.printList(); 

    sl.insertAfterVal(25, 47);
    cout << "After insertAfterVal(25, 47): ";
    sl.printList(); 

     return 0;

}