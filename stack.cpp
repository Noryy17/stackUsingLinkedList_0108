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
    top = newNode;           // 4. Update the top pointer
    cout << "Push Value: " << value << endl; // Menampilkan Push Value
    return value;
   } 
   //IsEmpty operation: check if the stack is empty
   bool isEmpty(){
    return top == NULL; // Return true if the top pointer is Null
   }

   //Pop Operation Remove the topmost element from the stack
   void pop (){
    if (isEmpty()){
        cout << "Stack is Empty." <<endl;
        return;  // if the stack is empty, print a message and return
    }
   