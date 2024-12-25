// #include <iostream>
// #include <vector>
//
// using namespace std;
//
// void greedySieveOfEratosthenes(int n) {
//     // Step 1: Initialize a boolean array where true means "prime"
//     vector<bool> isPrime(n + 1, true);
//     isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
//
//     // Step 2: Mark multiples of each prime starting from 2
//     for (int i = 2; i * i <= n; ++i) {
//         if (isPrime[i]) { // i is a prime number
//             // Mark all multiples of i starting from i * i
//             for (int j = i * i; j <= n; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//
//     // Step 3: Output all prime numbers
//     cout << "Prime numbers up to " << n << ":\n";
//     for (int i = 2; i <= n; ++i) {
//         if (isPrime[i]) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }
//
// int main() {
//     int n;
//     cout << "Enter the limit n to find all prime numbers up to n: ";
//     cin >> n;
//
//     greedySieveOfEratosthenes(n);
//     return 0;
// }


