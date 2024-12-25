// #include <iostream>
// using namespace std;
//
// // AVL Tree Node Structure
// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     int height;
//
//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//         height = 1; // New node is initially at height 1
//     }
// };
//
// // Utility functions to get height, balance factor, and rotations
// int height(Node* node) {
//     return (node == nullptr) ? 0 : node->height;
// }
//
// int getBalance(Node* node) {
//     return (node == nullptr) ? 0 : height(node->left) - height(node->right);
// }
//
// // Right Rotation (for Left-Left imbalance)
// Node* rightRotate(Node* y) {
//     Node* x = y->left;
//     Node* T2 = x->right;
//
//     // Perform rotation
//     x->right = y;
//     y->left = T2;
//
//     // Update heights
//     y->height = max(height(y->left), height(y->right)) + 1;
//     x->height = max(height(x->left), height(x->right)) + 1;
//
//     return x; // New root
// }
//
// // Left Rotation (for Right-Right imbalance)
// Node* leftRotate(Node* x) {
//     Node* y = x->right;
//     Node* T2 = y->left;
//
//     // Perform rotation
//     y->left = x;
//     x->right = T2;
//
//     // Update heights
//     x->height = max(height(x->left), height(x->right)) + 1;
//     y->height = max(height(y->left), height(y->right)) + 1;
//
//     return y; // New root
// }
//
// // Left-Right Rotation (for Left-Right imbalance)
// Node* leftRightRotate(Node* node) {
//     node->left = leftRotate(node->left);
//     return rightRotate(node);
// }
//
// // Right-Left Rotation (for Right-Left imbalance)
// Node* rightLeftRotate(Node* node) {
//     node->right = rightRotate(node->right);
//     return leftRotate(node);
// }
//
// // Insert a node into the AVL tree
// Node* insert(Node* node, int key) {
//     if (node == nullptr) {
//         return new Node(key);  // Create a new node if the tree is empty
//     }
//
//     // Perform the normal BST insert
//     if (key < node->data) {
//         node->left = insert(node->left, key);
//     } else if (key > node->data) {
//         node->right = insert(node->right, key);
//     } else {
//         return node;  // Duplicate keys are not allowed
//     }
//
//     // Update the height of this ancestor node
//     node->height = max(height(node->left), height(node->right)) + 1;
//
//     // Get the balance factor of this ancestor node
//     int balance = getBalance(node);
//
//     // If the node becomes unbalanced, then there are 4 cases
//
//     // Left Left Case
//     if (balance > 1 && key < node->left->data) {
//         return rightRotate(node);
//     }
//
//     // Right Right Case
//     if (balance < -1 && key > node->right->data) {
//         return leftRotate(node);
//     }
//
//     // Left Right Case
//     if (balance > 1 && key > node->left->data) {
//         return leftRightRotate(node);
//     }
//
//     // Right Left Case
//     if (balance < -1 && key < node->right->data) {
//         return rightLeftRotate(node);
//     }
//
//     return node;
// }
//
// // Delete a node from the AVL tree
// Node* deleteNode(Node* root, int key) {
//     if (root == nullptr) {
//         return root;
//     }
//
//     // Perform the normal BST delete
//     if (key < root->data) {
//         root->left = deleteNode(root->left, key);
//     } else if (key > root->data) {
//         root->right = deleteNode(root->right, key);
//     } else {
//         // Node with only one child or no child
//         if ((root->left == nullptr) || (root->right == nullptr)) {
//             Node* temp = root->left ? root->left : root->right;
//
//             // No child case
//             if (temp == nullptr) {
//                 temp = root;
//                 root = nullptr;
//             } else {
//                 // One child case
//                 *root = *temp;
//             }
//             delete temp;
//         } else {
//             // Node with two children: Get the inorder successor (smallest in the right subtree)
//             Node* temp = root->right;
//             while (temp->left != nullptr) {
//                 temp = temp->left;
//             }
//
//             // Copy the inorder successor's data to this node
//             root->data = temp->data;
//
//             // Delete the inorder successor
//             root->right = deleteNode(root->right, temp->data);
//         }
//     }
//
//     if (root == nullptr) {
//         return root;
//     }
//
//     // Update the height of the current node
//     root->height = max(height(root->left), height(root->right)) + 1;
//
//     // Get the balance factor of this node
//     int balance = getBalance(root);
//
//     // If the node becomes unbalanced, then there are 4 cases
//
//     // Left Left Case
//     if (balance > 1 && getBalance(root->left) >= 0) {
//         return rightRotate(root);
//     }
//
//     // Left Right Case
//     if (balance > 1 && getBalance(root->left) < 0) {
//         return leftRightRotate(root);
//     }
//
//     // Right Right Case
//     if (balance < -1 && getBalance(root->right) <= 0) {
//         return leftRotate(root);
//     }
//
//     // Right Left Case
//     if (balance < -1 && getBalance(root->right) > 0) {
//         return rightLeftRotate(root);
//     }
//
//     return root;
// }
//
// // Inorder traversal to print the tree
// void inorder(Node* root) {
//     if (root != nullptr) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }
//
// int main() {
//     Node* root = nullptr;
//
//     // Inserting elements
//     root = insert(root, 50);
//     root = insert(root, 30);
//     root = insert(root, 70);
//     root = insert(root, 20);
//     root = insert(root, 40);
//     root = insert(root, 60);
//     root = insert(root, 80);
//
//     cout << "Inorder traversal after insertion: ";
//     inorder(root);
//     cout << endl;
//
//     // Deleting an element
//     root = deleteNode(root, 50);
//     cout << "Inorder traversal after deletion of 50: ";
//     inorder(root);
//     cout << endl;
//
//     return 0;
// }








//
// #include <iostream>
// #include <set> // For std::set
//
// using namespace std;
//
// int main() {
//     // Create a set to store integers
//     set<int> mySet;
//
//     // Inserting elements into the set
//     mySet.insert(50);
//     mySet.insert(30);
//     mySet.insert(70);
//     mySet.insert(20);
//     mySet.insert(40);
//     mySet.insert(60);
//     mySet.insert(80);
//
//     // Printing the elements (in sorted order)
//     cout << "Elements in the set (sorted): ";
//     for (int val : mySet) {
//         cout << val << " ";
//     }
//     cout << endl;
//
//     // Deleting an element (removing 50 from the set)
//     mySet.erase(50);
//
//     // Printing the elements after deletion
//     cout << "After deletion of 50: ";
//     for (int val : mySet) {
//         cout << val << " ";
//     }
//     cout << endl;
//
//     // Trying to insert duplicate elements (duplicates are ignored in set)
//     mySet.insert(50); // 50 will not be inserted again
//     mySet.insert(30); // 30 will not be inserted again
//
//     cout << "After attempting to insert duplicates: ";
//     for (int val : mySet) {
//         cout << val << " ";
//     }
//     cout << endl;
//
//     return 0;
// }




// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// void bfs(int start, vector<vector<int>> &adjList, int n) {
//     vector<bool> visited(n, false);
//     queue<int> q;
//     q.push(start);
//     visited[start]= true;
//     cout<<"BFS "<<endl;
//     while(!q.empty()) {
//         int node = q.front();
//         q.pop();
//         cout<<node<<" ";
//         for(int n: adjList[node]) {
//             if(!visited[n]) {
//                 visited[n] = true;
//                 q.push(n);
//             }
//         }
//
//     }
//     cout<<endl;
//
//
// }
// int main() {
//     int n = 5; // Number of nodes
//     vector<vector<int>> adjList = {
//         {1, 2},    // Neighbors of node 0
//         {0, 3, 4}, // Neighbors of node 1
//         {0, 4},    // Neighbors of node 2
//         {1},       // Neighbors of node 3
//         {1, 2}     // Neighbors of node 4
//     };
//
//     bfs(0, adjList, n);
//     return 0;
// // }


