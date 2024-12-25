//
// // heap introduction
// #include <bits/stdc++.h>
// using namespace std;
//
// class Heap {
//     public:
//         int arr[100];
//         int size;
//
//         Heap() {
//             arr[0] = -1;
//             size = 0;
//         }
//
//         void insert(int val) {
//             int index = ++size;
//             arr[index] = val;
//
//             while(index > 1) {
//                 int parent = index/2;
//
//                 if(arr[parent] < arr[index]) {
//                     swap(arr[parent], arr[index]);
//                     index = parent;
//                 } else {
//                     return;
//                 }
//             }
//         }
//
//         // void deleteHeap() {
//         //     if(size == 0) {
//         //         cout << "Heap is empty!" << endl;
//         //         return;
//         //     }
//
//         //     arr[1] = arr[size];
//         //     size--;
//
//         //     int i = 1;
//         //     while(i < size) {
//         //         int leftChild = 2*i;
//         //         int rightChild = (2*i) + 1;
//
//         //         if(leftChild < size && arr[i] < arr[leftChild]) {
//         //             swap(arr[i], arr[leftChild]);
//         //             i = leftChild;
//         //         } else if(rightChild < size && arr[i] < arr[rightChild]) {
//         //             swap(arr[i], arr[rightChild]);
//         //             i = rightChild;
//         //         } else {
//         //             return;
//         //         }
//         //     }
//         // }
//
//         void deleteHeap() {
//             if(size == 0) {
//                 cout << "Heap is empty!" << endl;
//                 return;
//             }
//
//             arr[1] = arr[size];
//             size--;
//
//             int i = 1;
//             while(i < size) {
//                 int leftChild = 2*i;
//                 int rightChild = (2*i) + 1;
//                 int largest = i;
//
//                 if(leftChild <= size && arr[largest] < arr[leftChild]) {
//                     largest = leftChild;
//                 }
//
//                 if(rightChild <= size && arr[largest] < arr[rightChild]) {
//                     largest = rightChild;
//                 }
//
//                 if(largest == i) {
//                     return;
//                 } else {
//                     swap(arr[i], arr[largest]);
//                     i = largest;
//                 }
//             }
//         }
//
//         void print() {
//             cout << "Max Heap : ";
//             for(int i=1; i<=size; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
// };
//
// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2*i;
//     int right = 2*i + 1;
//
//     if(left <= n && arr[largest] < arr[left]) {
//         largest = left;
//     }
//
//     if(right <= n && arr[largest] < arr[right]) {
//         largest = right;
//     }
//
//     if(largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }
//
// int main() {
//     Heap h;
//
//     h.insert(50);
//     h.insert(40);
//     h.insert(60);
//     h.insert(30);
//     h.insert(55);
//     h.insert(70);
//     h.insert(20);
//
//     h.print();
//
//     h.deleteHeap();
//     h.print();
//
//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     int n = 5;
//     for(int i = n/2; i>0; i--) {
//         heapify(arr, n, i);
//     }
//
//     cout << "Heapified array : ";
//     for(int i=1; i<=n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }

// // build min heap
// #include <bits/stdc++.h>
// using namespace std;
//
// /*
//     0 based indexing
//     left - 2*i + 1;
//     right - 2*i + 2;
// */
//
// void heapify(vector<int>& arr, int n, int i) {
//     int smallest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;
//
//
//
//     if(left < n && arr[smallest] > arr[left]) {
//         smallest = left;
//     }
//
//     if(right < n && arr[smallest] > arr[right]) {
//         smallest = right;
//     }
//
//     if(smallest != i) {
//         swap(arr[i], arr[smallest]);
//         heapify(arr, n, smallest);
//     }
// }
//
// vector<int> buildMinHeap(vector<int>& arr) {
//     int n = arr.size();
//
//     for(int i=(n/2)-1; i>=0; i--) {
//         heapify(arr, n, i);
//     }
//
//     return arr;
// }
//
// int  main() {
//     vector<int> arr = {90, 30, 20, 120, 50, 60, 40, 150};
//
//     // Heapifing array
//     cout << "Before building Min Heap : ";
//     for(int i=0; i<arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     arr = buildMinHeap(arr);
//
//     cout << "After building Min Heap : ";
//     for(int i=0; i<arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }


// // heap sort
// #include <bits/stdc++.h>
// using namespace std;
//
// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2*i;
//     int right = 2*i + 1;
//
//     if(left <= n && arr[largest] < arr[left]) {
//         largest = left;
//     }
//
//     if(right <= n && arr[largest] < arr[right]) {
//         largest = right;
//     }
//
//     if(largest != i) {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//     }
// }
//
// void heapSort(int arr[], int size) {
//     while(size > 1) {
//         swap(arr[1], arr[size]);
//
//         size--;
//
//         heapify(arr, size, 1);
//     }
// }
//
// int main() {
//     int arr[6] = {-1, 54, 53, 55, 50, 52};
//     int size = 5;
//
//     // Heap creation
//     for(int i = size/2; i>0; i--) {
//         heapify(arr, size, i);
//     }
//
//     cout << "UnSorted array : ";
//     for(int i=1; i<=size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     // Calling heap sort
//     heapSort(arr, size);
//
//     cout << "Sorted array (Heap Sort) : ";
//     for(int i=1; i<=size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }
//
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void maxHeapify(int arr[], int n, int i) {
//     int largest = i;
//     int l = 2*i + 1;
//     int r = 2*i + 2;
//     if (l < n && arr[l] > arr[largest])
//         largest = l;
//     if (r < n && arr[r] > arr[largest])
//         largest = r;
//     if (largest != i) {
//         swap(arr[i], arr[largest]);
//         maxHeapify(arr, n, largest);
//     }
// }
// void buildMaxHeap(int arr[], int n) {
//     for (int i = n/2 - 1; i >= 0; i--) {
//         maxHeapify(arr, n, i);
//     }
// }
// void insertMaxHeap(int arr[], int &n, int val) {
//     n++;
//     int i = n - 1;
//     arr[i] = val;
//     while(i!=0 && arr[i] > arr[i/2 -1]) {
//         swap(arr[i], arr[i/2 -1]);
//         i  = i/2 - 1;
//     }
// }
// void deleteMaxHeap(int arr[], int &n) {
//     // int i =0;
//     // while(i<n) {
//     //     if(arr[i]%3==0) {
//     //         arr[i]=arr[n-1];
//     //         n--;
//     //         maxHeapify(arr, n, i);
//     //     }else {
//     //         i++;
//     //     }
//     // }
//     arr[0] = arr[n-1];
//     n--;
//     maxHeapify(arr, n, 0);
//
// }
// void displayMaxHeap(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void sum(int arr[], int n) {
//     int sum = 0;
//     for (int i = n/2; i < n; i++) {
//         sum += arr[i];
//     }
//     cout<<sum;
// }
// void heapSort(int arr[], int n) {
//     // for(int i = n/2-1; i >= 0; i--) {
//     //     maxHeapify(arr, n, i);
//     // }
//     // for(int i = n-1; i >= 0; i--) {
//     //     swap(arr[0], arr[i]);
//     //     maxHeapify(arr, i, 0);
//     // }
//     while(n>1) {
//         swap(arr[0], arr[n-1]);
//         n--;
//         maxHeapify(arr, n, 0);
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[100];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     buildMaxHeap(arr, n);
//     displayMaxHeap(arr, n);
//
//     // insertMaxHeap(arr, n, val);
//     // displayMaxHeap(arr, n);
//     // deleteMaxHeap(arr, n);
//     // displayMaxHeap(arr, n);
//     // sum(arr, n);
//     heapSort(arr, n);
//     displayMaxHeap(arr, n);
// }

