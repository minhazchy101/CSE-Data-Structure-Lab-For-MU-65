#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
};

struct Stack
{
    /* data */
    Node *top;

    Stack(){
        top = NULL;
        cout << "Linked List Stack initialized!\n";     
    }

    void push(int x){
        Node *newNode = new Node;
        newNode -> val = x;

        newNode-> next = top;

        top = newNode;

            cout << "Pushed " << x << " onto the stack.\n";
    
    }
};

int main(){
    Stack s;

    s.push(22);
    s.push(32);
    s.push(42);

    return 0;
}
