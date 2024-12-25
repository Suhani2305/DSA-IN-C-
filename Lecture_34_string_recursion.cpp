// // reverse in string
// // #include<iostream>
// // using namespace std;
// //
// // void reverse(string& str, int i, int j ) {
// //
// //     cout << "call recieved for " << str << endl;
// //
// //     //base case
// //     if(i>j)
// //         return ;
// //
// //     swap(str[i], str[j]);
// //     i++;
// //     j--;
// //
// //     //Recursive call
// //     reverse(str,i,j);
// //
// // }
// //
// // int main() {
// //
// //     string name = "abcde";
// //     cout << endl;
// //     reverse(name, 0 , name.length()-1 );
// //     cout << endl;
// //     cout << name << endl;
// //
// //     return 0;
// // }
//
//
// // // palindrome check
// // #include<iostream>
// // using namespace std;
// //
// // bool checkPalindrome(string str, int i, int  j) {
// //
// //     //base case
// //     if(i>j)
// //         return true;
// //
// //     if(str[i] != str[j])
// //         return false;
// //     else{
// //         //Recursive call
// //         return checkPalindrome(str, i+1,j-1);
// //     }
// // }
// //
// // int main() {
// //
// //     string name = "BookkooB";
// //     cout << endl;
// //
// //     bool isPalindrome = checkPalindrome(name, 0, name.length()-1 );
// //
// //     if(isPalindrome) {
// //         cout << "Its a Palindrome " << endl;
// //     }
// //     else {
// //         cout << "Its not a Palindrome " << endl;
// //     }
// //
// //
// //     return 0;
// // }
//
//
//
// // // power
// // #include<iostream>
// // using namespace std;
// //
// // int power(int a, int b) {
// //     //base case
// //     if( b == 0 )
// //         return 1;
// //
// //     if(b == 1)
// //         return a;
// //
// //     //RECURSIVE CALL
// //     int ans = power(a, b/2);
// //
// //     //if b is even
// //     if(b%2 == 0) {
// //         return ans * ans;
// //     }
// //     else {
// //         //if b is odd
// //         return a * ans * ans;
// //     }
// // }
// //
// // int main() {
// //
// //     int a,b;
// //     cin >> a >> b;
// //     cout << endl;
// //     int ans = power(a,b);
// //
// //     cout << "Answer is " << ans << endl;
// //
// //     return 0;
// // }
//
//
//
//
//
// // bubble sort
// #include<iostream>
// using namespace std;
//
// void sortArray(int *arr, int n) {
//
//     //base case - already sorted
//     if(n == 0 || n == 1) {
//         return ;
//     }
//
//     //1 case sovle karlia - largest element ko end me rakh dega
//     for(int i=0; i<n-1; i++) {
//         if(arr[i] > arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
//
//     //Recursive Call
//     sortArray(arr, n-1);
//
// }
//
// int main() {
//
//     int arr[5] = {2,5,1,6,9};
//
//     sortArray(arr,5);
//
//     for(int i=0; i<5; i++) {
//         cout << arr[i] << " ";
//     }cout << endl;
//
//
//     return 0;
// }