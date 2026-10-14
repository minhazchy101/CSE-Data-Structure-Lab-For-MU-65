#include <iostream>
using namespace std;

struct Node {
    int val;
    Node *next;
};


struct  Queue
{
    /* data */

    Node *headPtr;

    Queue(){
        headPtr = NULL;
             cout << "STL-Style Queue initialized!\n";
    }

    void push_back(int x){
        Node *newNode = new Node;
            newNode->val = x;
          newNode->next = NULL;

          if(headPtr == NULL){
             headPtr = newNode;

            cout << "Pushed " << x << " to the back.\n";
            return;
          }
          Node *cur = headPtr;
          while (cur ->next != NULL)
          {
            /* code */
            cur = cur -> next;

                 cout << "Pushed " << x << " to the back.\n";

          }
          
            }
};
int main(){
     Queue q;

     q.push_back(7);
     q.push_back(17);
     q.push_back(47);

     return 0;
}
