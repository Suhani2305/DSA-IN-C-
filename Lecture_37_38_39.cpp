// substring
// class Solution {
// private:
//     void solve(vector<int> nums, vector<int> output, int index, vector<vector<int> >& ans) {
//         //base case
//         if(index >= nums.size()) {
//             ans.push_back(output);
//             return ;
//         }
//
//         //exclude
//         solve(nums, output, index+1, ans);
//
//         //include
//         int element = nums[index];
//         output.push_back(element);
//         solve(nums, output, index+1, ans);
//
//     }
//
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//
//         vector<vector<int> > ans;
//         vector<int> output;
//         int index = 0;
//         solve(nums, output, index, ans);
//         return ans;
//
//     }
// };




// // subsequences
// void solve(vector<string>& ans, string str, string output, int i) {
//     //base case
//     if(i>=str.length()) {
//         if(output.length()>0)
//             ans.push_back(output);
//         return ;
//     }
//
//     //exclude
//     solve(ans, str, output, i+1);
//     //include
//     output.push_back(str[i]);
//     solve(ans, str, output, i+1);
// }
//
// vector<string> subsequences(string str){
//
//     vector<string> ans;
//     string output = "";
//     solve(ans,str,output,0);
//     return ans;
//
// }









// phone keyboard problem
// class Solution {
// private:
//     void solve(string digit, string output, int index, vector<string>& ans, string mapping[] ) {
//
//         //base case
//         if(index >= digit.length()) {
//             ans.push_back(output);
//             return;
//         }
//
//         int number = digit[index] - '0';
//         string value = mapping[number];
//
//         for(int i=0; i<value.length(); i++) {
//             output.push_back(value[i]);
//             solve(digit, output, index+1, ans, mapping);
//             output.pop_back();
//         }
//
//     }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits.length()==0)
//             return ans;
//         string output;
//         int index = 0;
//         string mapping[10] = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
//         solve(digits, output, index, ans, mapping);
//         return ans;
//     }
// };





// // RAT IN A MAZE
// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
//
// #define N 4 // Define maze size (you can change this)
//
// vector<string> paths; // Global vector to store all possible paths
//
// // Function to check if (x, y) is a valid move
// bool isSafe(int maze[N][N], int x, int y, vector<vector<bool>> &visited) {
//     return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
// }
//
// // Utility function to find all paths using backtracking
// void findAllPathsUtil(int maze[N][N], int x, int y, vector<vector<bool>> &visited, string path) {
//     // If destination (bottom-right corner) is reached
//     if (x == N - 1 && y == N - 1) {
//         paths.push_back(path);  // Store the current valid path
//         return;
//     }
//
//     // Mark the current cell as visited
//     visited[x][y] = true;
//
//     // Move down in the maze
//     if (isSafe(maze, x + 1, y, visited)) {
//         findAllPathsUtil(maze, x + 1, y, visited, path + 'D');  // Move Down
//     }
//
//     // Move right in the maze
//     if (isSafe(maze, x, y + 1, visited)) {
//         findAllPathsUtil(maze, x, y + 1, visited, path + 'R');  // Move Right
//     }
//
//     // Move up in the maze
//     if (isSafe(maze, x - 1, y, visited)) {
//         findAllPathsUtil(maze, x - 1, y, visited, path + 'U');  // Move Up
//     }
//
//     // Move left in the maze
//     if (isSafe(maze, x, y - 1, visited)) {
//         findAllPathsUtil(maze, x, y - 1, visited, path + 'L');  // Move Left
//     }
//
//     // Unmark the current cell (backtrack)
//     visited[x][y] = false;
// }
//
// // Function to find and print all paths from top-left to bottom-right
// void findAllPaths(int maze[N][N]) {
//     vector<vector<bool>> visited(N, vector<bool>(N, false));
//     string path = "";
//
//     findAllPathsUtil(maze, 0, 0, visited, path);
//
//     if (paths.empty()) {
//         cout << "No path found" << endl;
//     } else {
//         cout << "All paths from (0, 0) to (" << N-1 << ", " << N-1 << "):" << endl;
//         for (const string &p : paths) {
//             cout << p << endl;
//         }
//     }
// }
//
// // Function to take user input for the maze and ensure only '0' and '1' are allowed
// void inputMaze(int maze[N][N]) {
//     cout << "Enter the maze matrix (" << N << "x" << N << ") with 0 for blocked and 1 for open cells:" << endl;
//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> maze[i][j];
//             // Input validation
//             while (maze[i][j] != 0 && maze[i][j] != 1) {
//                 cout << "Invalid input! Enter 0 or 1 only: ";
//                 cin >> maze[i][j];
//             }
//         }
//     }
// }
//
// int main() {
//     int maze[N][N];
//
//     // Take user input for the maze
//     inputMaze(maze);
//
//     // Find all paths
//     findAllPaths(maze);
//
//     return 0;
// }
