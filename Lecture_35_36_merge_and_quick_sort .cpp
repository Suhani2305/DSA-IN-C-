// #include<iostream>
// using namespace std;
//
// void merge(int *arr, int s, int e) {
//
//     int mid = (s+e)/2;
//
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//
//     int *first = new int[len1];
//     int *second = new int[len2];
//
//     //copy values
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++) {
//         first[i] = arr[mainArrayIndex++];
//     }
//
//     mainArrayIndex = mid+1;
//     for(int i=0; i<len2; i++) {
//         second[i] = arr[mainArrayIndex++];
//     }
//
//     //merge 2 sorted arrays
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;
//
//     while(index1 < len1 && index2 < len2) {
//         if(first[index1] < second[index2]) {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }
//
//     while(index1 < len1) {
//         arr[mainArrayIndex++] = first[index1++];
//     }
//
//     while(index2 < len2 ) {
//         arr[mainArrayIndex++] = second[index2++];
//     }
//
//     delete []first;
//     delete []second;
//
// }
//
// void mergeSort(int *arr, int s, int e) {
//
//     //base case
//     if(s >= e) {
//         return;
//     }
//
//     int mid = (s+e)/2;
//
//     //left part sort karna h
//     mergeSort(arr, s, mid);
//
//     //right part sort karna h
//     mergeSort(arr, mid+1, e);
//
//     //merge
//     merge(arr, s, e);
//
// }
//
// int main() {
//
//     int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
//     int n = 15;
//
//     mergeSort(arr, 0, n-1);
//
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     } cout << endl;
//
//     return 0;
// }





// // quick sort
// #include<iostream>
// using namespace std;
//
//
// int partition( int arr[], int s, int e) {
//
//     int pivot = arr[s];
//
//     int cnt = 0;
//     for(int i = s+1; i<=e; i++) {
//         if(arr[i] <=pivot) {
//             cnt++;
//         }
//     }
//
//     //place pivot at right position
//     int pivotIndex = s + cnt;
//     swap(arr[pivotIndex], arr[s]);
//
//     //left and right wala part smbhal lete h
//     int i = s, j = e;
//
//     while(i < pivotIndex && j > pivotIndex) {
//
//         while(arr[i] <= pivot)
//         {
//             i++;
//         }
//
//         while(arr[j] > pivot) {
//             j--;
//         }
//
//         if(i < pivotIndex && j > pivotIndex) {
//             swap(arr[i++], arr[j--]);
//         }
//
//     }
//
//     return pivotIndex;
//
// }
//
// void quickSort(int arr[], int s, int e) {
//
//     //base case
//     if(s >= e)
//         return ;
//
//     //partitioon karenfe
//     int p = partition(arr, s, e);
//
//     //left part sort karo
//     quickSort(arr, s, p-1);
//
//     //right wala part sort karo
//     quickSort(arr, p+1, e);
//
// }
//
// int main() {
//
//     int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
//     int n = 10;
//
//     quickSort(arr, 0, n-1);
//
//     for(int i=0; i<n; i++)
//     {
//         cout << arr[i] << " ";
//     } cout << endl;
//
//
//     return 0;
// }


// // tower of hanoi
// #include<iostream>
// using namespace std;
// void towerofHanoi(int n, char from, char to, char temp) {
//     if(n==1) {
//         cout<<"Move Disk 1 from "<< from <<" to "<<to<<" Disk"<<endl;
//         return ;
//     }
//     towerofHanoi(n-1,from,temp,to);
//     cout<<"Move Disk "<<n<<" from "<<from<<" to "<<to<<" Disk"<<endl;
//     towerofHanoi(n-1,temp,from,to);
//
// }
// int main() {
//     int n; // Number of disks
//
//     // Input number of disks
//     cout << "Enter the number of disks: ";
//     cin >> n;
//
//     // Call towerOfHanoi function with source 'A', auxiliary 'B', and destination 'C'
//     towerofHanoi(n, 'A', 'B', 'C');
//
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void merge(int arr[], int left, int mid, int right) {
//     int n1 = mid-left+1;
//     int n2 = right-mid;
//     int leftArr[n1], rightArr[n2];
//     for(int i=0;i<n1;i++) {
//         leftArr[i]=arr[left+i];
//     }
//     for(int i=0;i<n2;i++) {
//         rightArr[i]=arr[mid+1+i];
//     }
//
//     int i=0, j=0, k=left;
//     while(i<n1&&j<n2) {
//         if(leftArr[i]<=rightArr[j]) {
//             arr[k++]=leftArr[i++];
//         }else {
//             arr[k++]=rightArr[j++];
//         }
//     }
//     while(i<n1) {
//         arr[k++]=leftArr[i++];
//     }
//     while(j<n2) {
//         arr[k++]=rightArr[j++];
//     }
//     return;
//
// }
// void mergeSort(int arr[], int left, int right) {
//     if(left<right) {
//         int mid = left+(right-left)/2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid+1, right);
//         merge(arr, left, mid, right);
//     }
// }
// int main() {
//     int arr[] = {38, 27, 43, 3, 9, 82, 10};
//     int size = sizeof(arr) / sizeof(arr[0]);
//
//     cout << "Original array:\n";
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//
//     // Perform recursive merge sort
//     mergeSort(arr, 0, size - 1);
//
//     cout << "Sorted array:\n";
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//
//     return 0;
// }



// #include<iostream>
// using namespace std;
// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low-1;
//     for(int j=low; j<high; j++) {
//         if(arr[j]<=pivot) {
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[high]);
//     return i+1;
// }