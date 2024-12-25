// #include <bits/stdc++.h>
// using namespace std;
//
// int main() {
//
//     queue<int> q;
//     q.push(11);
//
//     cout << "Front element of q : " << q.front() << endl;
//     cout << "Back element of q : " << q.back() << endl;
//     q.push(15);
//     cout << "Front element of q : " << q.front() << endl;
//     cout << "Back element of q : " << q.back() << endl;
//
//     q.push(23);
//     q.push(30);
//
//     cout << "Size of queue : " << q.size() << endl;
//
//     cout << endl << "Front before pop : " << q.front() << endl;
//     cout << "Back before pop : " << q.back() << endl;
//     q.pop();
//     cout << "Front after pop : " << q.front() << endl;
//     cout << "Back after pop : " << q.back() << endl << endl;
//
//     q.pop();
//     q.pop();
//
//     cout << "Size of queue : " << q.size() << endl;
//
//     q.pop();
//
//     if(q.empty()) {
//         cout << "Queue is empty!" << endl;
//     } else {
//         cout << "Queue is not empty!" << endl;
//     }
//
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Queue {
//     public:
//     int *arr;
//     int front, rear, size;
//     Queue(int S) {
//         size = S;
//         arr = new int[size];
//         front = rear = 0;
//     }
//     void push(int val) {
//         if(rear == size) {
//             cout<<"Queue is full"<<endl;
//         }else {
//             // rear++;
//             arr[rear++] = val;
//         }
//     }
//     void pop() {
//         if(front == rear) {
//             cout<<"Queue is empty"<<endl;
//         }else {
//             front++;
//             if(front == rear) {
//                 front=rear=0;
//             }
//         }
//     }
//     int frontElement() {
//         if (isEmpty()) {
//             cout << "Queue is empty" << endl;
//             return -1; // Return a sentinel value for empty queue
//         }
//         return arr[front];
//     }
//
//     int backElement() {
//         if (isEmpty()) {
//             cout << "Queue is empty" << endl;
//             return -1; // Return a sentinel value for empty queue
//         }
//         return arr[rear - 1]; // Corrected to access the last valid element
//     }
//     int queueSize() {
//         return rear - front;
//     }
//     bool isEmpty() {
//         return front==rear;
//     }
// };
// int main() {
//     Queue q(10);
//     q.push(11);
//
//     cout << "Front element of q : " << q.frontElement() << endl;
//     cout << "Back element of q : " << q.backElement() << endl;
//     q.push(15);
//     cout << "Front element of q : " << q.frontElement() << endl;
//     cout << "Back element of q : " << q.backElement() << endl;
//
//     q.push(23);
//     q.push(30);
//
//     cout << "Size of queue : " << q.queueSize() << endl;
//
//     cout << endl << "Front before pop : " << q.frontElement() << endl;
//     cout << "Back before pop : " << q.backElement() << endl;
//     q.pop();
//     cout << "Front after pop : " << q.frontElement() << endl;
//     cout << "Back after pop : " << q.backElement() << endl << endl;
//
//     q.pop();
//     q.pop();
//

//     cout << "Size of queue : " << q.queueSize() << endl;
//
//     q.pop();
//
//     if(q.isEmpty()) {
//         cout << "Queue is empty!" << endl;
//     } else {
//         cout << "Queue is not empty!" << endl;
//     }
//
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
//
// class CQueue {
//     int *arr;
//     int size, front, rear;
//
//     public:
//     CQueue(int S) {
//         size = S;
//         arr = new int[size];
//         front = rear = 0;
//     }
//
//     void push(int val) {
//         // Overflow condition
//         if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))) {
//             cout << "CQueue overflow!" << endl;
//             return;
//         } else if(front == -1) {
//             // For first element
//             front = rear = 0;
//         } else if(rear == size-1 && front != 0) {
//             // If front is in middle of the queue and rear is at the end
//             rear = 0;
//         } else {
//             rear++;
//         }
//
//         arr[rear] = val;
//     }
//
//     void pop() {
//         if(front == rear+1 || front == -1) {
//             cout << "CQueue underflow!" << endl;
//         } else if(front == rear) {
//             front = rear = -1;
//         } else if(front == size-1) {
//             front = 0;
//         } else {
//             front++;
//         }
//     }
//
//     int frontElement() {
//         return (front==rear) ? -1 : arr[front];
//     }
//
//     int backElement() {
//         return (front==rear) ? -1 : arr[rear-1];
//     }
//
//     int queueSize() {
//         return (front==rear) ? 0 : (rear-front);
//     }
//
//     bool empty() {
//         return (front==rear) ? true : false;
//     }
// };
//
// int main() {
//     CQueue q(10);
//     q.push(11);
//
//     cout << "Front element of q : " << q.frontElement() << endl;
//     cout << "Back element of q : " << q.backElement() << endl;
//     q.push(15);
//     cout << "Front element of q : " << q.frontElement() << endl;
//     cout << "Back element of q : " << q.backElement() << endl;
//
//     q.push(23);
//     q.push(30);
//
//     cout << "Size of queue : " << q.queueSize() << endl;
//
//     cout << endl << "Front before pop : " << q.frontElement() << endl;
//     cout << "Back before pop : " << q.backElement() << endl;
//     q.pop();
//     cout << "Front after pop : " << q.frontElement() << endl;
//     cout << "Back after pop : " << q.backElement() << endl << endl;
//
//     q.pop();
//     q.pop();
//
//     cout << "Size of queue : " << q.queueSize() << endl;
//
//     q.pop();
//
//     if(q.empty()) {
//         cout << "Queue is empty!" << endl;
//     } else {
//         cout << "Queue is not empty!" << endl;
//     }
//
//     return 0;
// }

//
// #include <bits/stdc++.h>
// using namespace std;
//
// class Deque {
//     int *arr;
//     int size, front, rear;
//
//     public:
//     Deque(int S) {
//         size = S;
//         arr = new int[size];
//         front = rear = -1;
//     }
//
//     void push_front(int val) {
//         // Overflow Condition
//         if((front==0 && rear==size-1) || (front != 0 && rear == (front-1)%(size-1))) {
//             cout << "Deque Overflow!" << endl;
//             return;
//         }
//
//         // For empty Deque
//         if(front == -1) {
//             front = rear = 0;
//             arr[front] = val;
//         } else if(front == 0 && rear != size-1) {     // To maintain cyclic nature
//             front = size-1;
//             arr[front] = val;
//         } else {        // Normal flow
//             front--;
//         }
//
//         arr[front] = val;
//     }
//
//     void push_back(int val) {
//         // Overflow condition
//         if((front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1))) {
//             cout << "Deque overflow!" << endl;
//             return;
//         } else if(front == -1) {        // For first element
//             front = rear = 0;
//         } else if(rear == size-1 && front != 0) {
//             // If front is in middle of the queue and rear is at the end
//             rear = 0;
//         } else {
//             rear++;
//         }
//
//         arr[rear] = val;
//     }
//
//     void pop_front() {
//         if(front == -1) {
//             cout << "Deque underflow!" << endl;
//         } else if(front == rear) {
//             front = rear = -1;
//         } else if(front == size-1) {
//             front = 0;
//         } else {
//             front++;
//         }
//     }
//
//     void pop_back() {
//         if(front == -1) {
//             cout << "Deque underflow!" << endl;
//         } else if(front == rear) {
//             front = rear = -1;
//         } else if(rear == 0) {
//             rear = size-1;
//         } else {
//             rear--;
//         }
//     }
//
//     bool empty() {
//         return (front==-1) ? true : false;
//     }
//
//     int frontElement() {
//         return (this->empty()) ? -1 : arr[front];
//     }
//
//     int backElement() {
//         return (this->empty()) ? -1 : arr[rear-1];
//     }
//
//     int queueSize() {
//         return (front==rear) ? 0 : (rear-front);
//     }
// };
//
// int main() {
//     Deque q(10);
//     q.push_front(11);
//
//     cout << "Front element of q : " << q.frontElement() << endl;
//     cout << "Back element of q : " << q.backElement() << endl;
//     q.push_back(15);
//     cout << "Front element of q : " << q.frontElement() << endl;
//     cout << "Back element of q : " << q.backElement() << endl;
//
//     q.push_back(23);
//     q.push_front(30);
//
//     cout << "Size of queue : " << q.queueSize() << endl;
//
//     cout << endl << "Front before pop : " << q.frontElement() << endl;
//     cout << "Back before pop : " << q.backElement() << endl;
//     q.pop_front();
//     cout << "Front after pop : " << q.frontElement() << endl;
//     cout << "Back after pop : " << q.backElement() << endl << endl;
//
//     q.pop_back();
//     q.pop_back();
//
//     cout << "Size of queue : " << q.queueSize() << endl;
//
//     q.pop_front();
//
//     if(q.empty()) {
//         cout << "Queue is empty!" << endl;
//     } else {
//         cout << "Queue is not empty!" << endl;
//     }
//
//     return 0;
// }

//
// #include<bits/stdc++.h>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node* next;
//     Node(int d) {
//         data = d;
//         next = NULL;
//     }
// };
// class Queue {
// public:
//     Node* front;
//     Node* rear;
//     Queue() {
//         front = NULL;
//         rear = NULL;
//
//     }
//     bool isEmpty() {
//         return front == NULL;
//     }
//     bool isFull() {
//         return front == rear;
//     }
//     void enqueue(int d) {
//         Node* temp = new Node(d);
//         if(isEmpty()) {
//             front = rear = temp;
//             return;
//         }
//         rear->next = temp;
//         rear = temp;
//     }
//     void dequeue() {
//         if(isEmpty()) {
//             cout << "Queue is empty." << endl;
//         }
//         Node* temp = front;
//         front = front->next;
//         if(front == nullptr) {
//             rear = nullptr;
//         }
//         delete temp;
//     }
//     int getFront() {
//         if(isEmpty()) {
//             cout << "Queue is empty." << endl;
//         }
//         return front->data;
//     }
//     int getRear() {
//         if(isEmpty()) {
//             cout << "Queue is empty." << endl;
//         }
//         return rear->data;
//     }
//     void sizeOfQueue() {
//         if(isEmpty()) {
//             cout << "Queue is empty." << endl;
//         }
//         int size =0;
//         Node* temp = front;
//         while(temp != NULL) {
//             size++;
//             temp = temp->next;
//         }
//         cout<< size<<endl;
//     }
// };
// int main() {
//     Queue q;
//
//     // Enqueue elements into the queue
//     q.enqueue(10);
//     q.enqueue(20);
//
//     // Display the front and rear elements of the queue
//     cout << "Queue Front: " << q.getFront() << endl;
//     cout << "Queue Rear: " << q.getRear() << endl;
//
//     // Dequeue elements from the queue
//     q.dequeue();
//     q.dequeue();
//
//     // Enqueue more elements into the queue
//     q.enqueue(30);
//     q.enqueue(40);
//     q.enqueue(50);
//     cout<<"Size: ";
//     q.sizeOfQueue();
//     // Dequeue an element from the queue
//     q.dequeue();
//
//     // Display the front and rear elements of the queue
//     cout << "Queue Front: " << q.getFront() << endl;
//     cout << "Queue Rear: " << q.getRear() << endl << endl;
//
//     return 0;
// }


//
// #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node* next,*prev;
//     Node(int d) {
//         data = d;
//         next = NULL;
//         prev = NULL;
//     }
// };
// class Deque {
//     Node* front;
//     Node* rear;
//     int size;
// public:
//     Deque() {
//         front = NULL;
//         rear = NULL;
//         size = 0;
//     }
//     void insertFront(int d) {
//         Node* temp = new Node(d);
//         if(temp == nullptr) {
//             cout<<"Error in insertFront()"<<endl;
//         }else {
//             if(front == NULL) {
//                 rear =front = temp;
//             }else {
//                 temp->next = front;
//                 front->prev = temp;
//                 front = temp;
//             }
//             size++;
//         }
//
//     }
//     void insertRear(int d) {
//         Node* temp = new Node(d);
//         if(temp == nullptr) {
//             cout<<"Error in insertRear()"<<endl;
//         }else {
//             if(rear == NULL) {
//                 front = rear = temp;
//             }else {
//                 temp->prev = rear;
//                 rear->next = temp;
//                 rear = temp;
//             }
//             size++;
//         }
//     }
//     void deleteFront() {
//         if(front == NULL) {
//             cout<<"Error in deleteFront()"<<endl;
//         }
//         else {
//             Node* temp = front;
//             front = front->next;
//             if(front==nullptr) {
//                 rear = NULL;
//             }else {
//                 front->prev = nullptr;
//                 delete temp;
//             }
//             size--;
//         }
//     }
//     void deleteRear() {
//         if(front == NULL) {
//             cout<<"Error in deleteFront()"<<endl;
//         }else {
//             Node*temp = rear;
//             rear = rear->prev;
//             if(rear==NULL) {
//                 front = NULL;
//             }
//             rear->next = nullptr;
//             delete temp;
//         }
//         size--;
//     }
//     int getRear() {
//         if(front == NULL) {
//             cout<<"Error in getRear()"<<endl;
//         }else {
//             return rear->data;
//         }
//     }
//     int getFront() {
//         if(front == NULL) {
//             cout<<"Error in getRear()"<<endl;
//         }else {
//             return front->data;
//         }
//     }
//     void erase() {
//         rear = nullptr;
//         while(front != NULL) {
//             Node* temp = front;
//             front = front->next;
//             delete temp;
//         }
//         size =0;
//     }
// };
// int main()
// {
//     Deque dq;
//     cout << "Insert element '5' at rear end\n";
//     dq.insertRear(5);
//
//     cout << "Insert element '10' at rear end\n";
//     dq.insertRear(10);
//
//     cout << "Rear end element: " << dq.getRear() << endl;
//
//     dq.deleteRear();
//     cout << "After deleting rear element new rear"
//          << " is: " << dq.getRear() << endl;
//
//     cout << "Inserting element '15' at front end \n";
//     dq.insertFront(15);
//
//     cout << "Front end element: " << dq.getFront() << endl;
//
//
//
//     dq.deleteFront();
//     cout << "After deleting front element new "
//          << "front is: " << dq.getFront() << endl;
//
//     return 0;
// }

// #include <iostream>
// #include <queue>
// #include <string>
// using namespace std;
//
// int main() {
//     int N;
//     cin >> N;  // Input: number of binary numbers to generate
//
//     // Create a queue to store the binary numbers
//     queue<string> q;
//
//     // Start with the binary number "1"
//     q.push("1");
//
//     // Generate binary numbers using the queue
//     for (int i = 0; i < N; ++i) {
//         // Dequeue the current binary number
//         string current = q.front();
//         q.pop();
//
//         // Print the current binary number
//         cout << current;
//
//         // If it is not the last number, add space
//         if (i != N - 1) {
//             cout << " ";
//         }
//
//         // Generate the next two binary numbers and enqueue them
//         q.push(current + "0");  // Append '0' to the current number
//         q.push(current + "1");  // Append '1' to the current number
//     }
//
//     cout << endl;
//     return 0;
// }


