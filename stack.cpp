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
    Node *top; //Pointer to the top node of the stack

    public:
    stack(){
        top = NULL; // Initialize the stack with a null top pointer

        
    }
   
    //Push Operation Insert an element onto the top of the  stack
   int push(int value){
    Node *newNode = new Node(); // 1.Allocate memory for the new node
    newNode ->data = value;    // 2.Assignt Value  
    newNode ->next = top;     // 3. Set the next pointer of the new node to current
