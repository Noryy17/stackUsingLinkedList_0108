// stackUsingLinkedList_0108
#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        next = NULL;
    }
};

//Stack Class
class stack{
    private:
    Node *top;  //Pointer to the top node of the stack

  