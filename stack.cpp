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
        return; // if the stack is empty, print a message and return
    }
    cout << "Popped Vallue: " << top->data << endl;
    top = top->next; //Update the top pointer to the next node
   }
   // Peek/Top operation: Retrive the vallue of the topmosi elemnt without removing it
   void peek(){
     if (isEmpty()){
        cout << "List is Empty." <<endl;
        return; // if the stack is empty,print a message and return
     }
     else{
        Node *current = top;
        while (current != NULL){
            cout << current->data<< " " << endl;
            current = current->next;
        }
        cout << endl;
     } // Return the vallue of the top node
   }
};

int main(){
    stack stack;

    int choice = 0;
    int value;

    while (choice != 4){
        
        cout <<"1. Push\n";
        cout <<"2. Pop\n";
        cout <<"3. Peek\n";
        cout <<"4. Exit\n";
        cout <<"Enter Your Choice: ";
        cin >> choice;

        switch (choice){
            case 1:
            cout << "Enter the value to the push";
            cin >> value;
            stack.push(value); // Push the entered value onto the stack
            break;
            case 2:
            stack.pop(); // Pop the topmost element from the stack
            break;
            case 3:
            stack.peek();
            break;

            case 4:
            cout << "Exiting Program." << endl;
            break;
            default:
            cout << "Invalid choice. Try Again." <<endl;
            break;
        }
        cout << endl;
    }
    return 0;
}