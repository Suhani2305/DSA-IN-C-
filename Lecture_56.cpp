// // next smallest element
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
//
// // Function to find the next smaller elements
// vector<int> nextSmallerElement(vector<int> &arr, int n) {
//     stack<int> s;
//     s.push(-1);  // Push -1 as a sentinel for elements that don't have a smaller element
//     vector<int> ans(n);  // Resultant array to store the next smaller elements
//
//     // Traverse the array from right to left
//     for (int i = n - 1; i >= 0; i--) {
//         int curr = arr[i];
//
//         // Pop elements from the stack that are greater than or equal to the current element
//         while (s.top() >= curr) {
//             s.pop();
//         }
//
//         // The top of the stack is the next smaller element for arr[i]
//         ans[i] = s.top();
//
//         // Push the current element onto the stack
//         s.push(curr);
//     }
//
//     return ans;
// }
//
// int main() {
//     int n;
//
//     // Input: Size of the array
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//
//     vector<int> arr(n);
//
//     // Input: Array elements
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     // Get the next smaller elements
//     vector<int> result = nextSmallerElement(arr, n);
//
//     // Output the result
//     cout << "The next smaller elements are: ";
//     for (int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }





// // previos smallest element
//
// #include <iostream>
// #include <vector>
// #include <stack>
// using namespace std;
//
// // Function to find the next smaller elements
// vector<int> nextSmallerElement(vector<int> &arr, int n) {
//     stack<int> s;
//     s.push(-1);  // Push -1 as a sentinel for elements that don't have a smaller element
//     vector<int> ans(n);  // Resultant array to store the next smaller elements
//
//     // Traverse the array from right to left
//     for (int i = 0; i < n; i++) {
//         int curr = arr[i];
//
//         // Pop elements from the stack that are greater than or equal to the current element
//         while (s.top() >= curr) {
//             s.pop();
//         }
//
//         // The top of the stack is the next smaller element for arr[i]
//         ans[i] = s.top();
//
//         // Push the current element onto the stack
//         s.push(curr);
//     }
//
//     return ans;
// }
//
// int main() {
//     int n;
//
//     // Input: Size of the array
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//
//     vector<int> arr(n);
//
//     // Input: Array elements
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//
//     // Get the next smaller elements
//     vector<int> result = nextSmallerElement(arr, n);
//
//     // Output the result
//     cout << "The next smaller elements are: ";
//     for (int i = 0; i < n; i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }




// // largest rectangle in the histogram
//
// #include <iostream>
// #include <vector>
// #include <stack>
// #include <climits>
// using namespace std;
//
// class Solution {
// private:
//     // Function to find the next smaller element for each element
//     vector<int> nextSmallerElement(vector<int> arr, int n) {
//         stack<int> s;
//         s.push(-1);  // Sentinel value
//         vector<int> ans(n);
//
//         // Traverse the array from right to left
//         for(int i = n - 1; i >= 0; i--) {
//             int curr = arr[i];
//             // Pop elements from the stack which are greater than or equal to the current element
//             while(s.top() != -1 && arr[s.top()] >= curr) {
//                 s.pop();
//             }
//             // The top of the stack is the index of the next smaller element
//             ans[i] = s.top();
//             // Push the current index onto the stack
//             s.push(i);
//         }
//         return ans;
//     }
//
//     // Function to find the previous smaller element for each element
//     vector<int> prevSmallerElement(vector<int> arr, int n) {
//         stack<int> s;
//         s.push(-1);  // Sentinel value
//         vector<int> ans(n);
//
//         // Traverse the array from left to right
//         for(int i = 0; i < n; i++) {
//             int curr = arr[i];
//             // Pop elements from the stack which are greater than or equal to the current element
//             while(s.top() != -1 && arr[s.top()] >= curr) {
//                 s.pop();
//             }
//             // The top of the stack is the index of the previous smaller element
//             ans[i] = s.top();
//             // Push the current index onto the stack
//             s.push(i);
//         }
//         return ans;
//     }
//
// public:
//     // Function to find the largest rectangular area in a histogram
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//
//         // Get the next smaller elements for each index
//         vector<int> next(n);
//         next = nextSmallerElement(heights, n);
//
//         // Get the previous smaller elements for each index
//         vector<int> prev(n);
//         prev = prevSmallerElement(heights, n);
//
//         // Calculate the maximum area of the rectangle
//         int area = INT_MIN;
//         for(int i = 0; i < n; i++) {
//             int height = heights[i];
//
//             // If there is no smaller element to the right, set next[i] to n
//             if(next[i] == -1) {
//                 next[i] = n;
//             }
//
//             // Width of the rectangle for the current bar
//             int width = next[i] - prev[i] - 1;
//
//             // Calculate the area for the current bar
//             int newArea = height * width;
//
//             // Update the maximum area
//             area = max(area, newArea);
//         }
//         return area;
//     }
// };
//
// int main() {
//     Solution solution;
//     int n;
//
//     // Input: Size of the histogram
//     cout << "Enter the number of elements in the histogram: ";
//     cin >> n;
//
//     vector<int> heights(n);
//
//     // Input: Heights of the histogram
//     cout <<"Enter the heights of the histogram bars: ";
//     for (int i = 0; i < n; i++) {
//         cin >> heights[i];
//     }
//
//     // Output the largest rectangle area
//     int maxArea = solution.largestRectangleArea(heights);
//     cout <<"The largest rectangle area in the histogram is: " << maxArea << endl;
//
//     return 0;
// }
