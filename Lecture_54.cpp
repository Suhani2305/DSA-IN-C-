// #include<iostream>
// #include<stack>
// using namespace std;
//
// class Stack {
//     //properties
// public:
//     int *arr;
//     int top;
//     int size;
//
//     // behaviour
//     Stack(int size) {
//         this -> size = size;
//         arr = new int[size];
//         top = -1;
//     }
//
//     void push( int element) {
//         if(size - top > 1) {
//             top++;
//             arr[top] = element;
//         }
//         else{
//             cout << "Stack OverFlow" << endl;
//         }
//     }
//
//     void pop() {
//         if(top >=0 ) {
//             top--;
//         }
//         else{
//             cout << "Stack UnderFlow" << endl;
//         }
//     }
//
//     int peek() {
//         if(top >=0 )
//             return arr[top];
//         else
//         {
//             cout << "Stack is Empty" << endl;
//             return -1;
//         }
//     }
//
//     bool isEmpty() {
//         if( top == -1) {
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
//
// };
//
//
// int main() {
//
//
//     Stack st(5);
//
//     st.push(22);
//     st.push(43);
//     st.push(44);
//     st.push(22);
//     st.push(43);
//     st.push(44);
//
//     cout << st.peek() << endl;
//
//     st.pop();
//
//     cout << st.peek() << endl;
//
//     st.pop();
//
//     cout << st.peek() << endl;
//
//     st.pop();
//
//     cout << st.peek() << endl;
//
//     if(st.isEmpty()) {
//         cout << "Stack is Empty mere dost " << endl;
//     }
//     else{
//         cout << "Stack is not Empty mere dost " << endl;
//     }
//
//
//      //creation of stack
//      stack<int> s;
//
//      //push operation
//      s.push(2);
//      s.push(3);
//
//      //pop
//      s.pop();
//
//      cout << "Printing top element " << s.top() << endl;
//
//      if(s.empty()){
//          cout << "Stack is empty " << endl;
//      }
//      else{
//          cout << "stack is not empty " << endl;
//      }
//
//      cout << "size of stack is " << s.size() << endl;
//
//     return 0;
// }





// #include<iostream>
// #include<stack>
// using namespace std;
// class Stack {
//     public:
//     int top;
//     int *arr;
//     int size;
//     Stack(int size) {
//         this->size = size;
//         arr = new int[size];
//         top = -1;
//     }
//     void push(int element) {
//         if(size-top>1) {
//             arr[++top] = element;
//         }else {
//             cout<<"Stack Overflow"<<endl;
//         }
//     }
//     void pop() {
//         if(top>=0) {
//             top--;
//         }else {
//             cout<<"Stack Underflow"<<endl;
//         }
//     }
//     int peek() {
//         if(top>=0) {
//             return arr[top];
//         }else {
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//     }
//     bool isEmpty() {
//         if(top==-1) {
//             return true;
//         }else {
//             return false;
//         }
//     }
// };
// int main() {
//     Stack st(5);
//     st.push(22);
//     st.push(43);
//     st.push(44);
//     st.push(45);
//     cout<<st.peek()<<endl;
//     st.pop();
//     cout<<st.peek()<<endl;
// }


// #include <iostream>
// using namespace std;
//
// // Node structure
// struct Node {
//     int data;        // Data part of the node
//     Node* next;      // Pointer to the next node
// };
//
// // Stack class to handle stack operations using linked list
// class Stack {
// private:
//     Node* top;       // Pointer to the top of the stack
//
// public:
//     // Constructor
//     Stack() {
//         top = nullptr;
//     }
//
//     // Push operation to add element to the stack
//     void push(int value) {
//         Node* newNode = new Node();
//         newNode->data = value;
//         newNode->next = top;    // New node points to the current top
//         top = newNode;          // Update top to the new node
//         cout << value << " pushed onto stack.\n";
//     }
//
//     // Pop operation to remove element from the stack
//     void pop() {
//         if (isEmpty()) {
//             cout << "Stack is empty! Nothing to pop.\n";
//             return;
//         }
//         Node* temp = top;    // Temporary pointer to store the current top
//         top = top->next;     // Move top to the next node
//         cout << temp->data << " popped from stack.\n";
//         delete temp;         // Free memory of the old top node
//     }
//
//     // Peek operation to return the top element
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty!\n";
//             return -1;
//         }
//         return top->data;
//     }
//
//     // Function to check if the stack is empty
//     bool isEmpty() {
//         return top == nullptr;
//     }
//
//     // Destructor to clean up memory when the stack is destroyed
//     ~Stack() {
//         while (!isEmpty()) {
//             pop();
//         }
//     }
// };
//
// int main() {
//     Stack stack;
//
//     stack.push(10);
//     stack.push(20);
//     stack.push(30);
//
//     cout << "Top element is: " << stack.peek() << endl;
//
//     stack.pop();
//     stack.pop();
//
//     cout << "Top element after popping is: " << stack.peek() << endl;
//
//     stack.pop();
//     stack.pop();  // Trying to pop from an empty stack
//
//     return 0;
// }



