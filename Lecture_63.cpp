// // DIAMETER
//
// #include <bits/stdc++.h>
// using namespace std;
//
// /* A binary tree node has data, pointer to left child
//    and a pointer to right child */
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };
// Node* newNode(int val) {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }
// Node* buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N') return NULL;
//
//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;
//
//     istringstream iss(str);
//     for (string str; iss >> str;) ip.push_back(str);
//
//     // Create the root of the tree
//     Node* root = newNode(stoi(ip[0]));
//
//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);
//
//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {
//
//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();
//
//         // Get the current node's value from the string
//         string currVal = ip[i];
//
//         // If the left child is not null
//         if (currVal != "N") {
//
//             // Create the left child for the current node
//             currNode->left = newNode(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->left);
//         }
//
//         // For the right child
//         i++;
//         if (i >= ip.size()) break;
//         currVal = ip[i];
//
//         // If the right child is not null
//         if (currVal != "N") {
//
//             // Create the right child for the current node
//             currNode->right = newNode(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }
//
//     return root;
// }
//
//
//  // } Driver Code Ends
// /* Tree node structure  used in the program
//
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
//
//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// }; */
//
// class Solution {
//   private:
//     int height(struct Node* node){
//         //base case
//         if(node == NULL) {
//             return 0;
//         }
//
//         int left = height(node ->left);
//         int right = height(node->right);
//
//         int ans = max(left, right) + 1;
//         return ans;
//     }
//   public:
//     // Function to return the diameter of a Binary Tree.
//
//     pair<int,int> diameterFast(Node* root) {
//         //base case
//         if(root == NULL) {
//             pair<int,int> p = make_pair(0,0);
//             return p;
//         }
//
//         pair<int,int> left = diameterFast(root->left);
//         pair<int,int> right = diameterFast(root->right);
//
//         int op1 = left.first;
//         int op2 = right.first;
//         int op3 = left.second + right.second + 1;
//
//         pair<int,int> ans;
//         ans.first = max(op1, max(op2, op3));;
//         ans.second = max(left.second , right.second) + 1;
//
//         return ans;
//     }
//     int diameter(Node* root) {
//
//         return diameterFast(root).first;
//
//     }
// };
//
// // { Driver Code Starts.
//
// /* Driver program to test size function*/
// int main() {
//     int t;
//     scanf("%d\n", &t);
//     while (t--) {
//         string s;
//         getline(cin, s);
//         Node* root = buildTree(s);
//         Solution ob;
//         cout << ob.diameter(root) << endl;
//     }
//     return 0;
// }
  // } Driver Code Ends




// // HEIGHT OF TREE
// //Initial template for C++
//
// #include <bits/stdc++.h>
// using namespace std;
//
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
//
//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
//
// // Function to Build Tree
// Node* buildTree(string str)
// {
//     // Corner Case
//     if(str.length() == 0 || str[0] == 'N')
//             return NULL;
//
//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;
//
//     istringstream iss(str);
//     for(string str; iss >> str; )
//         ip.push_back(str);
//
//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));
//
//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);
//
//     // Starting from the second element
//     int i = 1;
//     while(!queue.empty() && i < ip.size()) {
//
//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();
//
//         // Get the current node's value from the string
//         string currVal = ip[i];
//
//         // If the left child is not null
//         if(currVal != "N") {
//
//             // Create the left child for the current Node
//             currNode->left = new Node(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->left);
//         }
//
//         // For the right child
//         i++;
//         if(i >= ip.size())
//             break;
//         currVal = ip[i];
//
//         // If the right child is not null
//         if(currVal != "N") {
//
//             // Create the right child for the current node
//             currNode->right = new Node(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }
//
//     return root;
// }
//
//  // } Driver Code Ends
// //User function template for C++
//
// /*
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
//
//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
// */
// class Solution{
//     public:
//     //Function to find the height of a binary tree.
//     int height(struct Node* node){
//         //base case
//         if(node == NULL) {
//             return 0;
//         }
//
//         int left = height(node ->left);
//         int right = height(node->right);
//
//         int ans = max(left, right) + 1;
//         return ans;
//
//     }
// };
//
// // { Driver Code Starts.
// int main()
// {
//     int t;
// 	scanf("%d ",&t);
//     while(t--)
//     {
//         string treeString;
// 		getline(cin,treeString);
// 		Node* root = buildTree(treeString);
//         Solution ob;
// 		cout<<ob.height(root)<<endl;
//     }
//     return 0;
// }  // } Driver Code Ends










// // IDENTICAL SUBTREE
// #include <bits/stdc++.h>
// using namespace std;
//
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
//
//     Node(int x){
//         data = x;
//         left = NULL;
//         right = NULL;
//     }
// };
//
//
//  // } Driver Code Ends
// /* A binary tree node
//
//
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
//
//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
// */
//
//
//
// class Solution
// {
//     public:
//     //Function to check if two trees are identical.
//     bool isIdentical(Node *r1, Node *r2)
//     {
//         // base case
//         if(r1 == NULL && r2 == NULL) {
//             return true;
//         }
//
//         if(r1 == NULL && r2 != NULL) {
//             return false;
//         }
//
//         if(r1 != NULL && r2 == NULL) {
//             return false;
//         }
//
//         bool left = isIdentical(r1->left, r2->left);
//         bool right = isIdentical(r1->right, r2->right);
//
//         bool value = r1->data == r2->data;
//
//
//         if(left && right && value) {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//
//     }
//
// };
//
// // { Driver Code Starts.
//
// // Function to Build Tree
// Node *buildTree(string str) {
//     // Corner Case
//     if (str.length() == 0 || str[0] == 'N')
//         return NULL;
//
//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;
//
//     istringstream iss(str);
//     for (string str; iss >> str;)
//         ip.push_back(str);
//
//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));
//
//     // Push the root to the queue
//     queue<Node *> queue;
//     queue.push(root);
//
//     // Starting from the second element
//     int i = 1;
//     while (!queue.empty() && i < ip.size()) {
//
//         // Get and remove the front of the queue
//         Node *currNode = queue.front();
//         queue.pop();
//
//         // Get the current node's value from the string
//         string currVal = ip[i];
//
//         // If the left child is not null
//         if (currVal != "N") {
//
//             // Create the left child for the current node
//             currNode->left = new Node(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->left);
//         }
//
//         // For the right child
//         i++;
//         if (i >= ip.size())
//             break;
//         currVal = ip[i];
//
//         // If the right child is not null
//         if (currVal != "N") {
//
//             // Create the right child for the current node
//             currNode->right = new Node(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }
//
//     return root;
// }
//
// int main() {
//     int tc;
//     scanf("%d ", &tc);
//     while (tc--) {
//         string str, str1;
//         getline(cin, str);
//         Node *rootA = buildTree(str);
//         getline(cin, str1);
//         Node *rootB = buildTree(str1);
//         Solution ob;
//         if (ob.isIdentical(rootA, rootB)) {
//             cout << "Yes\n";
//         } else {
//             cout << "No\n";
//         }
//     }
//     return 0;
// }  // } Driver Code Ends
//
//
//



// // SUM OF TREE
// #include <bits/stdc++.h>
// using namespace std;
//
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };
// // Utility function to create a new Tree Node
// Node* newNode(int val)
// {
//     Node* temp = new Node;
//     temp->data = val;
//     temp->left = NULL;
//     temp->right = NULL;
//
//     return temp;
// }
// // Function to Build Tree
// Node* buildTree(string str)
// {
//     // Corner Case
//     if(str.length() == 0 || str[0] == 'N')
//             return NULL;
//
//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;
//
//     istringstream iss(str);
//     for(string str; iss >> str; )
//         ip.push_back(str);
//
//     // Create the root of the tree
//     Node* root = newNode(stoi(ip[0]));
//
//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);
//
//     // Starting from the second element
//     int i = 1;
//     while(!queue.empty() && i < ip.size()) {
//
//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();
//
//         // Get the current node's value from the string
//         string currVal = ip[i];
//
//         // If the left child is not null
//         if(currVal != "N") {
//
//             // Create the left child for the current node
//             currNode->left = newNode(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->left);
//         }
//
//         // For the right child
//         i++;
//         if(i >= ip.size())
//             break;
//         currVal = ip[i];
//
//         // If the right child is not null
//         if(currVal != "N") {
//
//             // Create the right child for the current node
//             currNode->right = newNode(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }
//
//     return root;
// }


 // } Driver Code Ends
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// // Should return true if tree is Sum Tree, else false
// class Solution
// {
//     public:
//     pair<bool,int> isSumTreeFast(Node* root) {
//
//         //base case
//         if(root == NULL) {
//             pair<bool,int> p = make_pair(true, 0);
//             return p;
//         }
//
//         if(root->left == NULL && root->right == NULL ) {
//             pair<bool,int> p = make_pair(true, root->data);
//             return p;
//         }
//
//         pair<bool,int> leftAns = isSumTreeFast(root->left);
//         pair<bool,int> rightAns = isSumTreeFast(root->right);
//
//         bool isLeftSumTree = leftAns.first;
//         bool isRightSumTree = rightAns.first;
//
//         int leftSum = leftAns.second;
//         int rightSum = rightAns.second;
//
//         bool condn = root->data == leftSum + rightSum;
//
//         pair<bool, int> ans;
//
//         if(isLeftSumTree && isRightSumTree && condn) {
//             ans.first = true;
//             ans.second = root->data + leftSum + rightSum ;
//         }
//         else
//         {
//             ans.first = false;
//         }
//         return ans;
//
//     }
//     bool isSumTree(Node* root)
//     {
//         return isSumTreeFast(root).first;
//     }
// };
//
// // { Driver Code Starts.
//
// int main()
// {
//
//     int t;
// 	scanf("%d ",&t);
//     while(t--)
//     {
//         string s;
// 		getline(cin,s);
//         Node* root = buildTree(s);
//         Solution ob;
//         cout <<ob.isSumTree(root) << endl;
//     }
//     return 1;
// }  // } Driver Code Ends
//
//
//
// // HEIGHT OF TREE
// //Initial template for C++
//
// #include <bits/stdc++.h>
// using namespace std;
//
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
//
//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };
//
// // Function to Build Tree
// Node* buildTree(string str)
// {
//     // Corner Case
//     if(str.length() == 0 || str[0] == 'N')
//             return NULL;
//
//     // Creating vector of strings from input
//     // string after spliting by space
//     vector<string> ip;
//
//     istringstream iss(str);
//     for(string str; iss >> str; )
//         ip.push_back(str);
//
//     // Create the root of the tree
//     Node *root = new Node(stoi(ip[0]));
//
//     // Push the root to the queue
//     queue<Node*> queue;
//     queue.push(root);
//
//     // Starting from the second element
//     int i = 1;
//     while(!queue.empty() && i < ip.size()) {
//
//         // Get and remove the front of the queue
//         Node* currNode = queue.front();
//         queue.pop();
//
//         // Get the current node's value from the string
//         string currVal = ip[i];
//
//         // If the left child is not null
//         if(currVal != "N") {
//
//             // Create the left child for the current Node
//             currNode->left = new Node(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->left);
//         }
//
//         // For the right child
//         i++;
//         if(i >= ip.size())
//             break;
//         currVal = ip[i];
//
//         // If the right child is not null
//         if(currVal != "N") {
//
//             // Create the right child for the current node
//             currNode->right = new Node(stoi(currVal));
//
//             // Push it to the queue
//             queue.push(currNode->right);
//         }
//         i++;
//     }
//
//     return root;
// }
//
//  // } Driver Code Ends
// //User function template for C++
//
// /*
// struct Node
// {
//     int data;
//     struct Node* left;
//     struct Node* right;
//
//     Node(int x){
//         data = x;
//         left = right = NULL;
//     }
// };
// */
// class Solution{
//     public:
//     //Function to find the height of a binary tree.
//     int height(struct Node* node){
//         //base case
//         if(node == NULL) {
//             return 0;
//         }
//
//         int left = height(node ->left);
//         int right = height(node->right);
//
//         int ans = max(left, right) + 1;
//         return ans;
//
//     }
// };
//
// // { Driver Code Starts.
// int main()
// {
//     int t;
// 	scanf("%d ",&t);
//     while(t--)
//     {
//         string treeString;
// 		getline(cin,treeString);
// 		Node* root = buildTree(treeString);
//         Solution ob;
// 		cout<<ob.height(root)<<endl;
//     }
//     return 0;
// }  // } Driver Code Ends