// // zigzag traversal
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
//
// // Define the Node class
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;
//
//     // Constructor to initialize data, left and right pointers
//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
// vector<int> zigZagTraversal(Node* root) {
//     vector<int> result;
//     if(root==nullptr){
//         return result;
//     }
//     queue<Node*> q;
//     q.push(root);
//
//     bool leftToRight = true;           //direction flag
//     while(!q.empty()) {
//         int size = q.size();
//         vector<int> ans(size);
//
//         for(int i=0; i<size; i++) {
//             Node* temp = q.front();
//             q.pop();
//
//             int index = leftToRight ? i: size-i-1;
//             ans[index] = temp->data;
//
//             if(temp->left) {
//                 q.push(temp->left);
//             }if(temp->right) {
//                 q.push(temp->right);
//             }
//         }
//         leftToRight = !leftToRight;
//         for(int i=0; i<size; i++) {
//             result.push_back(ans[i]);
//         }
//     }
//     return result;
// }
// int main() {
//     // Example usage:
//     // Constructing the binary tree using Node class
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
//
//     // Performing zigzag traversal
//     vector<int> result = zigZagTraversal(root);
//
//     // Printing the result
//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }



// // boundaryTraversaL
// #include <iostream>
// #include <vector>
// using namespace std;
//
// // Define the Node class for the binary tree
// class Node {
// public:
//     int data;
//     Node* left;
//     Node* right;
//
//     // Constructor to initialize a new node
//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
//
//     // Function to check if the node is a leaf
//     bool isLeaf() const {
//         return (left == nullptr && right == nullptr);
//     }
// };
//
// // Function to traverse and collect the left boundary nodes
// void traverseLeft(Node* root, vector<int>& ans) {
//     if (root == nullptr || root->isLeaf())
//         return;
//
//     ans.push_back(root->data);
//
//     if (root->left)
//         traverseLeft(root->left, ans);
//     else
//         traverseLeft(root->right, ans);
// }
//
// // Function to traverse and collect the leaf nodes
// void traverseLeaf(Node* root, vector<int>& ans) {
//     if (root == nullptr)
//         return;
//
//     if (root->isLeaf()) {
//         ans.push_back(root->data);
//         return;
//     }
//
//     traverseLeaf(root->left, ans);
//     traverseLeaf(root->right, ans);
// }
//
// // Function to traverse and collect the right boundary nodes
// void traverseRight(Node* root, vector<int>& ans) {
//     if (root == nullptr || root->isLeaf())
//         return;
//
//     if (root->right)
//         traverseRight(root->right, ans);
//     else
//         traverseRight(root->left, ans);
//
//     ans.push_back(root->data);
// }
//
// // Function to perform boundary traversal of the binary tree
// vector<int> boundaryTraversal(Node* root) {
//     vector<int> ans;
//     if (root == nullptr)
//         return ans;
//
//     ans.push_back(root->data); // Include the root node
//
//     traverseLeft(root->left, ans);   // Traverse the left boundary
//     traverseLeaf(root->left, ans);   // Traverse the leaf nodes (left subtree)
//     traverseLeaf(root->right, ans);  // Traverse the leaf nodes (right subtree)
//     traverseRight(root->right, ans); // Traverse the right boundary
//
//     return ans;
// }
//
// int main() {
//     // Manually constructing a binary tree
//     Node* root = new Node(20);
//     root->left = new Node(8);
//     root->right = new Node(22);
//     root->left->left = new Node(4);
//     root->left->right = new Node(12);
//     root->left->right->left = new Node(10);
//     root->left->right->right = new Node(14);
//     root->right->right = new Node(25);
//
//     // Getting the boundary traversal
//     vector<int> res = boundaryTraversal(root);
//
//     // Outputting the result
//     for (int i : res)
//         cout << i << " ";
//     cout << endl;
//
//     return 0;
// }



// // vertical traversal of binary tree
// #include <iostream>
// #include <map>
// #include <vector>
// #include <queue>
// using namespace std;
//
// class TreeNode {
// public:
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//
//     // Constructor to initialize a node
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
//
// class BinaryTree {
// public:
//     TreeNode* root;
//
//     // Constructor to initialize the binary tree with root as nullptr
//     BinaryTree() : root(nullptr) {}
//
//     // Method to insert nodes in level order (for example construction)
//     TreeNode* insertLevelOrder(int arr[], int i, int n) {
//         if (i < n) {
//             TreeNode* node = new TreeNode(arr[i]);
//             node->left = insertLevelOrder(arr, 2 * i + 1, n);
//             node->right = insertLevelOrder(arr, 2 * i + 2, n);
//             return node;
//         }
//         return nullptr;
//     }
//
//     // Method for vertical order traversal
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int, map<int, vector<int>>> nodesMap; // Map to store nodes by horizontal distance and level
//         queue<pair<TreeNode*, pair<int, int>>> q; // Queue to store nodes along with their horizontal distance and level
//         q.push({root, {0, 0}});  // Start from the root at horizontal distance 0 and level 0
//
//         // BFS traversal
//         while (!q.empty()) {
//             auto p = q.front();
//             q.pop();
//             TreeNode* node = p.first;
//             int hd = p.second.first;    // horizontal distance
//             int level = p.second.second;  // level
//
//             // Insert the node's value in the map at the correct position
//             nodesMap[hd][level].push_back(node->val);
//
//             // Push left and right children with updated horizontal distance and level
//             if (node->left) {
//                 q.push({node->left, {hd - 1, level + 1}});
//             }
//             if (node->right) {
//                 q.push({node->right, {hd + 1, level + 1}});
//             }
//         }
//
//         // Prepare the result from the map
//         vector<vector<int>> result;
//         for (auto& hd_map : nodesMap) {           // Iterating over horizontal distances
//             vector<int> col;
//             for (auto& level_map : hd_map.second) {  // Iterating over levels
//                 col.insert(col.end(), level_map.second.begin(), level_map.second.end());
//             }
//             result.push_back(col);
//         }
//
//         return result;
//     }
//
//     // Helper function to print the result
//     void printVerticalTraversal(const vector<vector<int>>& result) {
//         for (const auto& col : result) {
//             for (int val : col) {
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };
//
// int main() {
//     BinaryTree tree;
//
//     // Input array to create a binary tree using level order
//     int arr[] = {1, 2, 3, 4, 5, 6, 7,-1,-1,-1,-1,-1,8,-1,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//
//     // Initialize the tree
//     tree.root = tree.insertLevelOrder(arr, 0, n);
//
//     // Perform vertical traversal
//     vector<vector<int>> result = tree.verticalTraversal(tree.root);
//
//     cout << "Vertical Traversal of the Binary Tree:" << endl;
//     tree.printVerticalTraversal(result);
//
//     return 0;
// }



// // top view of bt
// #include <iostream>
// #include <map>
// #include <queue>
// using namespace std;
//
// class TreeNode {
// public:
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//
//     // Constructor to initialize a node
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
//
// class BinaryTree {
// public:
//     TreeNode* root;
//
//     // Constructor to initialize the binary tree with root as nullptr
//     BinaryTree() : root(nullptr) {}
//
//     // Method to insert nodes in level order (for example construction)
//     TreeNode* insertLevelOrder(int arr[], int i, int n) {
//         if (i < n) {
//             TreeNode* node = new TreeNode(arr[i]);
//             node->left = insertLevelOrder(arr, 2 * i + 1, n);
//             node->right = insertLevelOrder(arr, 2 * i + 2, n);
//             return node;
//         }
//         return nullptr;
//     }
//
//     // Function to get the top view of the binary tree
//     vector<int> topView(TreeNode* root) {
//         vector<int> result;
//         if (!root) return result;
//
//         // Map to store the first node at each horizontal distance (hd)
//         map<int, int> topNode;
//         // Queue to perform BFS; stores nodes with their horizontal distance from the root
//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 0});  // Start with the root node at horizontal distance 0
//
//         while (!q.empty()) {
//             auto p = q.front();
//             q.pop();
//             TreeNode* node = p.first;
//             int hd = p.second;  // Horizontal distance of the current node
//
//             // If this horizontal distance is being seen for the first time, add the node to the map
//             if (topNode.find(hd) == topNode.end()) {
//                 topNode[hd] = node->val;
//             }
//
//             // Add left and right children with updated horizontal distances
//             if (node->left) {
//                 q.push({node->left, hd - 1});
//             }
//             if (node->right) {
//                 q.push({node->right, hd + 1});
//             }
//         }
//
//         // Extract the top view from the map
//         for (auto& p : topNode) {
//             result.push_back(p.second);
//         }
//
//         return result;
//     }
//
//     // Helper function to print the top view result
//     void printTopView(const vector<int>& result) {
//         for (int val : result) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// };
//
// int main() {
//     BinaryTree tree;
//
//     // Input array to create a binary tree using level order
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//
//     // Initialize the tree
//     tree.root = tree.insertLevelOrder(arr, 0, n);
//
//     // Get the top view of the binary tree
//     vector<int> result = tree.topView(tree.root);
//
//     cout << "Top View of the Binary Tree:" << endl;
//     tree.printTopView(result);
//
//     return 0;
// }
//


// // left view of the tree
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
//
// class TreeNode {
// public:
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//
//     // Constructor to initialize a node
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
//
// class BinaryTree {
// public:
//     TreeNode* root;
//
//     // Constructor to initialize the binary tree with root as nullptr
//     BinaryTree() : root(nullptr) {}
//
//     // Method to insert nodes in level order (for example construction)
//     TreeNode* insertLevelOrder(int arr[], int i, int n) {
//         if (i < n) {
//             TreeNode* node = new TreeNode(arr[i]);
//             node->left = insertLevelOrder(arr, 2 * i + 1, n);
//             node->right = insertLevelOrder(arr, 2 * i + 2, n);
//             return node;
//         }
//         return nullptr;
//     }
//
//     // Function to get the left view of the binary tree
//     vector<int> leftView(TreeNode* root) {
//         vector<int> result;
//         if (!root) return result;
//
//         queue<TreeNode*> q;
//         q.push(root);
//
//         // Level-order traversal
//         while (!q.empty()) {
//             int levelSize = q.size(); // Number of nodes at the current level
//
//             for (int i = 0; i < levelSize; ++i) {
//                 TreeNode* node = q.front();
//                 q.pop();
//
//                 // Add the first node of each level to the result
//                 if (i == 0) {
//                     result.push_back(node->val);
//                 }
//
//                 // Add left and right children to the queue
//                 if (node->left) {
//                     q.push(node->left);
//                 }
//                 if (node->right) {
//                     q.push(node->right);
//                 }
//             }
//         }
//
//         return result;
//     }
//
//     // Helper function to print the left view result
//     void printLeftView(const vector<int>& result) {
//         for (int val : result) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// };
//
// int main() {
//     BinaryTree tree;
//
//     // Input array to create a binary tree using level order
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//
//     // Initialize the tree
//     tree.root = tree.insertLevelOrder(arr, 0, n);
//
//     // Get the left view of the binary tree
//     vector<int> result = tree.leftView(tree.root);
//
//     cout << "Left View of the Binary Tree:" << endl;
//     tree.printLeftView(result);
//
//     return 0;
// }


// // right view of a binary tree
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
//
// class TreeNode {
// public:
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//
//     // Constructor to initialize a node
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
//
// class BinaryTree {
// public:
//     TreeNode* root;
//
//     // Constructor to initialize the binary tree with root as nullptr
//     BinaryTree() : root(nullptr) {}
//
//     // Method to insert nodes in level order (for example construction)
//     TreeNode* insertLevelOrder(int arr[], int i, int n) {
//         if (i < n) {
//             TreeNode* node = new TreeNode(arr[i]);
//             node->left = insertLevelOrder(arr, 2 * i + 1, n);
//             node->right = insertLevelOrder(arr, 2 * i + 2, n);
//             return node;
//         }
//         return nullptr;
//     }
//
//     // Function to get the right view of the binary tree
//     vector<int> rightView(TreeNode* root) {
//         vector<int> result;
//         if (!root) return result;
//
//         queue<TreeNode*> q;
//         q.push(root);
//
//         // Level-order traversal
//         while (!q.empty()) {
//             int levelSize = q.size(); // Number of nodes at the current level
//
//             for (int i = 0; i < levelSize; ++i) {
//                 TreeNode* node = q.front();
//                 q.pop();
//
//                 // Add the last node of each level to the result
//                 if (i == levelSize - 1) {
//                     result.push_back(node->val);
//                 }
//
//                 // Add left and right children to the queue
//                 if (node->left) {
//                     q.push(node->left);
//                 }
//                 if (node->right) {
//                     q.push(node->right);
//                 }
//             }
//         }
//
//         return result;
//     }
//
//     // Helper function to print the right view result
//     void printRightView(const vector<int>& result) {
//         for (int val : result) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// };
//
// int main() {
//     BinaryTree tree;
//
//     // Input array to create a binary tree using level order
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//
//     // Initialize the tree
//     tree.root = tree.insertLevelOrder(arr, 0, n);
//
//     // Get the right view of the binary tree
//     vector<int> result = tree.rightView(tree.root);
//
//     cout << "Right View of the Binary Tree:" << endl;
//     tree.printRightView(result);
//
//     return 0;
// }


//
// // diagonal traversal of a binary tree
// #include <iostream>
// #include <vector>
// #include <map>
// #include <queue>
// using namespace std;
//
// class TreeNode {
// public:
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//
//     // Constructor to initialize a node
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };
//
// class BinaryTree {
// public:
//     TreeNode* root;
//
//     // Constructor to initialize the binary tree with root as nullptr
//     BinaryTree() : root(nullptr) {}
//
//     // Method to insert nodes in level order (for example construction)
//     TreeNode* insertLevelOrder(int arr[], int i, int n) {
//         if (i < n) {
//             TreeNode* node = new TreeNode(arr[i]);
//             node->left = insertLevelOrder(arr, 2 * i + 1, n);
//             node->right = insertLevelOrder(arr, 2 * i + 2, n);
//             return node;
//         }
//         return nullptr;
//     }
//
//     // Function to perform diagonal traversal of the binary tree
//     vector<vector<int>> diagonalTraversal(TreeNode* root) {
//         vector<vector<int>> result;
//         if (!root) return result;
//
//         // Map to store diagonal elements
//         map<int, vector<int>> diagonalMap;
//
//         // Queue to perform BFS; stores nodes with their corresponding diagonal distance
//         queue<pair<TreeNode*, int>> q;
//         q.push({root, 0});
//
//         while (!q.empty()) {
//             auto p = q.front();
//             q.pop();
//             TreeNode* node = p.first;
//             int diagonal = p.second;
//
//             // Store the current node in the corresponding diagonal map
//             diagonalMap[diagonal].push_back(node->val);
//
//             // If there is a left child, it belongs to the next diagonal
//             if (node->left) {
//                 q.push({node->left, diagonal + 1});
//             }
//
//             // The right child remains on the same diagonal
//             if (node->right) {
//                 q.push({node->right, diagonal});
//             }
//         }
//
//         // Transfer map values to result in order of diagonals
//         for (auto& entry : diagonalMap) {
//             result.push_back(entry.second);
//         }
//
//         return result;
//     }
//
//     // Helper function to print the diagonal traversal result
//     void printDiagonalTraversal(const vector<vector<int>>& result) {
//         for (const auto& diagonal : result) {
//             for (int val : diagonal) {
//                 cout << val << " ";
//             }
//             cout << endl;
//         }
//     }
// };
//
// int main() {
//     BinaryTree tree;
//
//     // Input array to create a binary tree using level order
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//
//     // Initialize the tree
//     tree.root = tree.insertLevelOrder(arr, 0, n);
//
//     // Get the diagonal traversal of the binary tree
//     vector<vector<int>> result = tree.diagonalTraversal(tree.root);
//
//     cout << "Diagonal Traversal of the Binary Tree:" << endl;
//     tree.printDiagonalTraversal(result);
//
//     return 0;
// }
