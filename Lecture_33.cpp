// // issorted array
// #include<iostream>
// using namespace std;
//
// bool isSorted(int arr[], int size) {
//
//     //base case
//     if(size == 0 || size == 1 ){
//         return true;
//     }
//
//     if(arr[0] > arr[1])
//         return false;
//     else {
//         bool remainingPart = isSorted(arr + 1, size - 1 );
//         return remainingPart;
//     }
//
// }
//
// int main() {
//
//     int arr[5] = {9,4,9,9,9};
//     int size = 5;
//
//     bool ans = isSorted(arr, size);
//
//     if(ans){
//         cout << "Array is sorted " << endl;
//     }
//     else {
//         cout << "Array is not sorted " << endl;
//     }
//
//     return 0;
// }



// // sum of array
// #include<iostream>
// using namespace std;
//
// int getSum(int *arr, int size) {
//
//     //base case
//     if(size == 0) {
//         return 0;
//     }
//     if(size == 1 )
//     {
//         return arr[0];
//     }
//
//     int remainingPart = getSum(arr+1, size-1);
//     int sum = arr[0] + remainingPart;
//     return sum;
// }
//
// int main() {
//
//     int arr[5] = {2,4,9,9,9};
//     int size = 5;
//
//     int sum = getSum(arr, size);
//
//     cout << "Sum is " << sum << endl;
//
//     return 0;
// }



// // linear search
// #include<iostream>
// using namespace std;
//
// void print(int arr[], int n) {
//     cout << "Size of array is " << n << endl;
//
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     } cout << endl;
//
// }
//
// bool linearSearch(int arr[], int size, int k ) {
//     print(arr,size);
//     // base case
//     if(size == 0)
//         return false;
//
//     if(arr[0] == k) {
//         return true;
//     }
//     else {
//         bool remainingPart = linearSearch(arr+1, size-1, k );
//         return remainingPart;
//     }
// }
//
// int main() {
//
//     int arr[5] = {3,5,1,2,6};
//     int size = 5;
//     int key = 6;
//     bool ans = linearSearch(arr, size, key);
//
//     if(ans ){
//         cout << "Present " << endl;
//     }
//     else{
//         cout << "absent " << endl;
//     }
//
//     return 0;
// }


// // binary search
// #include<iostream>
// using namespace std;
//
// void print(int arr[], int s, int e) {
//
//     for(int i=s; i<=e; i++) {
//         cout << arr[i] << " ";
//     } cout << endl;
// }
//
// bool binarySearch(int *arr, int s, int e , int k ) {
//     print(arr, s, e);
//     //base case
//
//     //element not found
//     if(s>e)
//         return false;
//
//     int mid = s + (e-s)/2;
//
//     //element found
//     if(arr[mid] == k)
//         return true;
//
//     if(arr[mid] < k) {
//         return binarySearch(arr, mid+1, e, k);
//     }
//     else{
//         return binarySearch(arr, s, mid-1, k);
//     }
// }
//
//
// int main() {
//
//     int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
//     int size = 11;
//     int key = 22;
//
//     cout << "Present or not: " << binarySearch(arr, 0, size-1, key) << endl;
//
//     return 0;
// }


