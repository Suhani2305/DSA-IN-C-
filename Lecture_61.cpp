// //  first Negative In Window of size k...
// #include <iostream>
// #include <deque>
// #include <vector>
// using namespace std;
//
// vector<int> firstNegativeInWindow(vector<int>& arr, int k) {
//     deque<int> dq; // To store the indices of negative numbers
//     vector<int> result; // To store the first negative number for each window
//
//     // Traverse the array
//     for (int i = 0; i < arr.size(); i++) {
//         // Remove elements that are out of the current window
//         if (!dq.empty() && dq.front() <= i - k) {
//             dq.pop_front();
//         }
//
//         // If current element is negative, add its index to the deque
//         if (arr[i] < 0) {
//             dq.push_back(i);
//         }
//
//         // If we have hit the window size `k`, store the result
//         if (i >= k - 1) {
//             // If deque is not empty, the front of the deque is the first negative
//             // Else, there are no negative numbers in this window, so store 0
//             if (!dq.empty()) {
//                 result.push_back(arr[dq.front()]);
//             } else {
//                 result.push_back(0); // No negative number in this window
//             }
//         }
//     }
//     return result;
// }
//
// int main() {
//     vector<int> arr = {12, -1, -7, 8, -15, 30, 16, 28};
//     int k = 3;
//
//     vector<int> result = firstNegativeInWindow(arr, k);
//
//     // Print the result
//     cout << "First negative number in every window of size " << k << ": ";
//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
//
//     return 0;
// }



// // reverse k element of the queue
// #include <iostream>
// #include <queue>
// #include <stack>
// using namespace std;
//
// // Function to reverse the first k elements of a queue
// void reverseKElements(queue<int>& q, int k) {
//     if (q.empty() || k > q.size() || k <= 0) {
//         return;
//     }
//
//     stack<int> s;
//
//     // Step 1: Dequeue the first k elements from the queue and push them onto a stack
//     for (int i = 0; i < k; i++) {
//         s.push(q.front());
//         q.pop();
//     }
//
//     // Step 2: Pop elements from the stack and enqueue them back into the queue
//     while (!s.empty()) {
//         q.push(s.top());
//         s.pop();
//     }
//
//     // Step 3: Move the remaining elements (size - k elements) to the back of the queue
//     int remaining = q.size() - k;
//     for (int i = 0; i < remaining; i++) {
//         q.push(q.front());
//         q.pop();
//     }
// }
//
// int main() {
//     queue<int> q;
//
//     // Inserting elements into the queue
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     q.push(70);
//     q.push(80);
//     q.push(90);
//     q.push(100);
//
//     int k = 5;  // Number of elements to reverse
//
//     cout << "Original Queue: ";
//     queue<int> q_copy = q; // Make a copy to print original queue
//     while (!q_copy.empty()) {
//         cout << q_copy.front() << " ";
//         q_copy.pop();
//     }
//     cout << endl;
//
//     // Reverse the first k elements
//     reverseKElements(q, k);
//
//     // Display the queue after reversing the first k elements
//     cout << "Queue after reversing first " << k << " elements: ";
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
//
//     return 0;
// }
