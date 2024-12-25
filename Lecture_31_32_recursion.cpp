//
// Created by Asus on 08-10-2024.
//
// #include<iostream>
// using namespace std;
//
// int factorial(int n) {
//
//     //base case
//     if(n==0)
//         return 1;
//
//     // int smallerProblem = factorial(n-1);
//     // int biggerProblem = n * smallerProblem;
//     //
//     // return biggerProblem;
//     return n*factorial(n-1);
// }
//
// int main() {
//
//     int n;
//     cin >> n;
//
//     int ans = factorial(n);
//
//     cout << ans << endl;
//
//     return 0;
// }


// say digits
// #include<iostream>
// using namespace std;
//
// void sayDigit(int n, string arr[]) {
//     //base case
//     if (n == 0)
//         return;
//
//     //processing
//     int digit = n % 10;
//     n = n / 10;
//
//
//     //recursive call
//     sayDigit(n, arr);
//
//     cout << arr[digit] << " ";
// }
//
// int main() {
//     string arr[10] = {
//         "zero", "one", "two", "three",
//         "four", "five", "six", "seven", "eight", "nine"
//     };
//     int n;
//     cin >> n;
//
//     cout << endl << endl << endl;
//     sayDigit(n, arr);
//     cout << endl << endl << endl;
//
//
//     return 0;
// }





// // walking example
// #include<iostream>
// using namespace std;
//
// void reachHome(int src, int dest) {
//
//     cout << "source " << src  << " destination " << dest << endl;
//     //base case
//     if(src == dest) {
//         cout << " pahuch gya " << endl;
//         return ;
//     }
//
//     //processing - ek step aage badhjao
//     src++;
//
//     //recursive call
//     reachHome(src, dest);
//
// }
//
// int main() {
//
//     int dest = 10;
//     int src = 1;
//
//     cout << endl;
//
//     reachHome(src, dest);
//
//
//     return 0;
// }




//
// // climbing stairs
// #include<iostream>
// using namespace std;
// int countDistinctWayToClimbStair(long long nStairs)
// {
//     //base case
//     if(nStairs < 0)
//         return 0;
//
//     if(nStairs == 0)
//         return 1;
//
//     //R.C
//     int ans = countDistinctWayToClimbStair(nStairs-1)
//         + countDistinctWayToClimbStair(nStairs-2);
//
//     return ans;
// }
// int main() {
//     long long nStairs;
//     cin>>nStairs;
//     cout<<countDistinctWayToClimbStair(nStairs);
//     return 0;
// }


