// #include<bits/stdc++.h>
// using namespace std;
// class Node {
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node(int data) {
//             this->data = data;
//             this->left = NULL;
//             this->right = NULL;
//         }
//     };
// bool validateBST(Node* root, int min, int max) {
//     if(root==nullptr) {
//         return true;
//     }
//     if(root->data>=min && root->data<=max) {
//         bool left = validateBST(root->left, min, root->data);
//         bool right = validateBST(root->right, root->data, max);
//         return left && right;
//     }
//     return false;
// }
//
//
// int kthSmallest(Node* root, int &index, int k) {
//     if(root==NULL) {
//         return -1;
//     }
//     int left = kthSmallest(root->left, index, k);
//     if(left!=-1) {
//         return left;
//     }
//     index++;
//     if(index==k) {
//         return root->data;
//     }
//     return kthSmallest(root->right, index, k);
// }

// #include <iostream>
// using namespace std;
//
// // Definition of the Node structure
// struct Node {
//     int data;       // Value stored in the node
//     Node* left;     // Pointer to the left child
//     Node* right;    // Pointer to the right child
//     // Constructor for initializing a node
//     Node(int val) {
//         data = val;
//         left = nullptr;
//         right = nullptr;
//     }
// };
//
// // Function to find the inorder predecessor and successor
// pair<int, int> predecessorAndSuccessor(Node* root, int key) {
//     // Initialize the pointer to traverse the tree and find the key node
//     Node* keyNode = root;
//
//     // Variables to store predecessor and successor, default -1
//     int pred = -1; // Predecessor
//     int succ = -1; // Successor
//
//     // Step 1: Traverse the tree to find the key node
//     while (keyNode->data != key) {
//         if (keyNode->data > key) {
//             // Current node is greater than the key, so it can be a successor
//             succ = keyNode->data;
//             // Move to the left subtree to find a smaller successor
//             keyNode = keyNode->left;
//         } else {
//             // Current node is less than the key, so it can be a predecessor
//             pred = keyNode->data;
//             // Move to the right subtree to find a larger predecessor
//             keyNode = keyNode->right;
//         }
//     }
//
//     // Step 2: Find the predecessor in the left subtree (if it exists)
//     Node* leftTree = keyNode->left; // Start at the left child of the key node
//     while (leftTree != nullptr) {
//         // The rightmost node in the left subtree is the predecessor
//         pred = leftTree->data;
//         leftTree = leftTree->right; // Keep moving right
//     }
//
//     // Step 3: Find the successor in the right subtree (if it exists)
//     Node* rightTree = keyNode->right; // Start at the right child of the key node
//     while (rightTree != nullptr) {
//         // The leftmost node in the right subtree is the successor
//         succ = rightTree->data;
//         rightTree = rightTree->left; // Keep moving left
//     }
//
//     // Return the predecessor and successor as a pair
//     return {pred, succ};
// }
//
// // Helper function to insert a node in a BST
// Node* insertBST(Node* root, int val) {
//     if (root == nullptr) {
//         // Create a new node if root is null
//         return new Node(val);
//     }
//     if (val < root->data) {
//         // Insert in the left subtree if value is smaller
//         root->left = insertBST(root->left, val);
//     } else {
//         // Insert in the right subtree if value is greater or equal
//         root->right = insertBST(root->right, val);
//     }
//     return root;
// }
//
// // Function to perform an inorder traversal (for visualization)
// void inorderTraversal(Node* root) {
//     if (root == nullptr) return; // Base case: if root is null, stop
//     inorderTraversal(root->left); // Traverse the left subtree
//     cout << root->data << " ";   // Print the current node's value
//     inorderTraversal(root->right); // Traverse the right subtree
// }
//
// // Main function to test the code
// int main() {
//     // Create the root of the BST
//     Node* root = nullptr;
//
//     // Insert nodes into the BST
//     root = insertBST(root, 20);
//     root = insertBST(root, 10);
//     root = insertBST(root, 30);
//     root = insertBST(root, 5);
//     root = insertBST(root, 15);
//     root = insertBST(root, 40);
//
//     // Display the BST (inorder traversal)
//     cout << "Inorder Traversal of BST: ";
//     inorderTraversal(root);
//     cout << endl;
//
//     // Test the predecessorAndSuccessor function
//     int key = 15;
//     pair<int, int> result = predecessorAndSuccessor(root, key);
//     cout << "Predecessor and Successor of " << key << ": ";
//     cout << "Predecessor = " << result.first << ", Successor = " << result.second << endl;
//
//     return 0;
// }


