// #include <iostream>
// #include <vector>
//
// using namespace std;
//
// // Function to check if person 'a' knows person 'b'
// bool knows(const vector<vector<int>>& mat, int a, int b) {
//     return mat[a][b] == 1;
// }
//
// // Function to find the celebrity
// int findCelebrity(const vector<vector<int>>& mat, int n) {
//     // Step 1: Find the candidate using elimination
//     int candidate = 0;
//     for (int i = 1; i < n; ++i) {
//         if (knows(mat, candidate, i)) {
//             // Candidate knows i, so candidate can't be the celebrity, i might be
//             candidate = i;
//         }
//         // If candidate does not know i, i cannot be a celebrity
//         // so we continue with the current candidate.
//     }
//
//     // Step 2: Verify the candidate
//     for (int i = 0; i < n; ++i) {
//         // The candidate should not know anyone, and everyone should know the candidate
//         if (i != candidate && (knows(mat, candidate, i) || !knows(mat, i, candidate))) {
//             return -1; // No celebrity found
//         }
//     }
//
//     return candidate; // Celebrity found
// }
//
// int main() {
//     vector<vector<int>> mat = {
//         {0, 1, 0},
//         {0, 0, 0},
//         {0, 1, 0}
//     };
//
//     int n = mat.size();
//     int result = findCelebrity(mat, n);
//
//     if (result == -1) {
//         cout << "No celebrity found" << endl;
//     } else {
//         cout << "Celebrity is person " << result << endl;
//     }
//
//     return 0;
// }
