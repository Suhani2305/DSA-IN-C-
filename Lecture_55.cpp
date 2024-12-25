// reverse a string
// #include<iostream>
// #include<stack>
// using namespace std;
//
//
//
// int main () {
//     string str = "babbar";
//
//     stack<char> s;
//
//     for (int i = 0; i<str.length(); i++) {
//         char ch = str[i];
//         s.push(ch);
//     }
//
//     string ans = "";
//
//     while(!s.empty()) {
//         char ch = s.top();
//         ans.push_back(ch);
//
//         s.pop();
//     }
//
//     cout << "answer is: "<< ans << endl;
//
//     return 0;
// }



// // sort stack using stl;
// #include <iostream>
// #include <stack>
// #include <vector>
// #include <algorithm>  // For std::sort
// using namespace std;
//
// int main() {
//     stack<int> myStack;
//
//     // Push elements onto the stack
//     myStack.push(30);
//     myStack.push(10);
//     myStack.push(50);
//     myStack.push(20);
//     myStack.push(40);
//
//     // Use a vector to transfer stack elements
//     vector<int> tempContainer;
//
//     // Transfer elements from stack to vector
//     while (!myStack.empty()) {
//         tempContainer.push_back(myStack.top());
//         myStack.pop();
//     }
//
//     // Sort the vector
//     sort(tempContainer.begin(), tempContainer.end());
//
//     // Push the sorted elements back into the stack
//     for (int i : tempContainer) {
//         myStack.push(i);
//     }
//
//     // Display the sorted stack (top to bottom)
//     cout << "Stack after sorting (top to bottom):" << endl;
//     while (!myStack.empty()) {
//         cout << myStack.top() << endl;
//         myStack.pop();
//     }
//
//     return 0;
// }



// // reverse of a stack using stl
// #include <iostream>
// #include <stack>
// #include <vector>
// using namespace std;
//
// int main() {
//     stack<int> myStack;
//
//     // Push elements onto the stack
//     myStack.push(89);
//     myStack.push(20);
//     myStack.push(67);
//     myStack.push(670);
//     myStack.push(45);
//
//     // Use a vector to store stack elements temporarily
//     vector<int> tempContainer;
//
//     // Transfer elements from the stack to the vector
//     while (!myStack.empty()) {
//         tempContainer.push_back(myStack.top());
//         myStack.pop();
//     }
//
//     // Push elements back from the vector to the stack (which will reverse them)
//     for (int i : tempContainer) {
//         myStack.push(i);
//     }
//
//     // Display the reversed stack (top to bottom)
//     cout << "Stack after reversing (top to bottom):" << endl;
//     while (!myStack.empty()) {
//         cout << myStack.top() << " ";
//         myStack.pop();
//     }
//
//     return 0;
// }




// // add element at the bottom
// #include <iostream>
// #include <stack>
// using namespace std;
//
// // Function to insert an element at the bottom of the stack
// void insertAtBottom(stack<int>& myStack, int element) {
//     if (myStack.empty()) {
//         // If the stack is empty, push the element directly
//         myStack.push(element);
//     } else {
//         // Store the top element and remove it
//         int topElement = myStack.top();
//         myStack.pop();
//
//         // Recursive call to reach the bottom
//         insertAtBottom(myStack, element);
//
//         // Push the original top element back on top
//         myStack.push(topElement);
//     }
// }
//
// int main() {
//     stack<int> myStack;
//
//     // Push elements onto the stack
//     myStack.push(10);
//     myStack.push(20);
//     myStack.push(30);
//     myStack.push(40);
//     myStack.push(50);
//
//     // Display the original stack
//     cout << "Original stack (top to bottom):" << endl;
//     stack<int> tempStack = myStack;  // Copy to preserve the original stack for printing
//     while (!tempStack.empty()) {
//         cout << tempStack.top() << " ";
//         tempStack.pop();
//     }
//     cout << endl;
//     int n;
//     cin>>n;
//     // Insert an element at the bottom
//     insertAtBottom(myStack, n);
//
//     // Display the stack after inserting at the bottom
//     cout << "Stack after inserting "<< n <<" at the bottom (top to bottom):" << endl;
//     while (!myStack.empty()) {
//         cout << myStack.top() << " ";
//         myStack.pop();
//     }
//
//     return 0;
// }



// // redundant bracket
// #include <iostream>
// #include <stack>
// using namespace std;
//
// bool hasRedundantBrackets(string expr) {
//     stack<char> s;
//
//     for (char ch : expr) {
//         // If current character is a closing bracket ')'
//         if (ch == ')') {
//             char top = s.top();
//             s.pop();
//
//             bool isRedundant = true;
//
//             // Check for operators between the brackets
//             while (top != '(') {
//                 if (top == '+' || top == '-' || top == '*' || top == '/') {
//                     isRedundant = false;
//                 }
//                 top = s.top();
//                 s.pop();
//             }
//
//             // If no operator was found inside the parentheses
//             if (isRedundant) {
//                 return true; // Found redundant brackets
//             }
//         }
//         // Push every other character to the stack
//         else {
//             s.push(ch);
//         }
//     }
//
//     // No redundant brackets found
//     return false;
// }
//
// int main() {
//     string expr;
//     cout << "Enter an expression: ";
//     cin >> expr;
//
//     if (hasRedundantBrackets(expr)) {
//         cout << "The expression has redundant brackets." << endl;
//     } else {
//         cout << "The expression does not have redundant brackets." << endl;
//     }
//
//     return 0;
// }
