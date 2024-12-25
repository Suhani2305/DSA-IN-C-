// #include <bits/stdc++.h>
// #include "BST.h"
// using namespace std;
//
// void inOrder(Node* root, vector<int>& ans) {
//     if(root == NULL) {
//         return;
//     }
//
//     inOrder(root->left, ans);
//     ans.push_back(root->data);
//     inOrder(root->right, ans);
// }
//
// bool checkTwoSum(Node* root, int target) {
//     if(root == NULL) {
//         return false;
//     }
//
//     vector<int> arr;
//     inOrder(root, arr);
//
//     int i=0, j=arr.size()-1;
//     while(i <= j) {
//         if(arr[i] + arr[j] == target) {
//             return true;
//         }
//
//         if(arr[i] + arr[j] > target) {
//             j--;
//         } else {
//             i++;
//         }
//     }
//
//     return false;
// }
//
// int main() {
//     Node* root = NULL;
//     int target;
//
//     cout << "Enter data to create BST : ";
//     takeinput(root);
//
//     cout << "Enter the target value : ";
//     cin >> target;
//
//     cout << endl << "Level Order Traversal : " << endl;
//     levelOrderTraversal(root);
//
//     bool isSum = checkTwoSum(root, target);
//
//     if(isSum) {
//         cout << "Sum pair is present in BST!" << endl;
//     } else {
//         cout << "Sum pair is not present in BST!" << endl;
//     }
//
//     return 0;
// }
//
// // 14 12 28 8 4 10 9 11 19 32 18 17 22 21 24 39 -1



// // flatted bst into sorted ll
// #include <bits/stdc++.h>
// #include "BST.h"
// using namespace std;
//
// void inOrder(Node* root, vector<Node*>& ans) {
//     if(root == NULL) {
//         return;
//     }
//
//     inOrder(root->left, ans);
//     ans.push_back(root);
//     inOrder(root->right, ans);
// }
//
//
// void flattenBST(Node* &root) {
//     if(root == NULL) {
//         return;
//     }
//
//     vector<Node*> arr;
//     inOrder(root, arr);
//
//     for(int i=0; i<arr.size()-1; i++) {
//         arr[i]->left = NULL;
//         arr[i]->right = arr[i+1];
//     }
//
//     arr[arr.size()-1]->left = NULL;
//     arr[arr.size()-1]->right = NULL;
//
//     root = arr[0];
// }
//
// int main() {
//     Node* root = NULL;
//
//     cout << "Enter data to create BST : ";
//     takeinput(root);
//
//     cout << endl << "Level Order Traversal : " << endl;
//     levelOrderTraversal(root);
//
//     flattenBST(root);
//
//     Node* temp = root;
//     cout << "Flatten BST : ";
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->right;
//     }
//
//     return 0;
// }
//
// 14 12 28 8 4 10 9 11 19 32 18 17 22 21 24 39 -1


// #include <bits/stdc++.h>
// #include "BST.h"
// using namespace std;
//
// void inOrder(Node* root, vector<int>& ans) {
//     if(root == NULL) {
//         return;
//     }
//
//     inOrder(root->left, ans);
//     ans.push_back(root->data);
//     inOrder(root->right, ans);
// }
//
// Node* balanceBST(vector<int>& arr, int start, int end) {
//     if(end-start < 0) {
//         return NULL;
//     }
//
//     int mid = start + (end-start)/2;
//     Node* temp = new Node(arr[mid]);
//
//     temp->left = balanceBST(arr, start, mid-1);
//     temp->right = balanceBST(arr, mid+1, end);
//
//     return temp;
// }
//
// Node* NormalToBalance(Node* &root) {
//     if(root == NULL) {
//         return NULL;
//     }
//
//     vector<int> arr;
//     inOrder(root, arr);
//
//     Node* newBST = balanceBST(arr, 0, arr.size()-1);
//
//     return newBST;
// }
//
// int main() {
//     Node* root = NULL;
//
//     cout << "Enter data to create BST : ";
//     takeinput(root);
//
//     cout << endl << "Level Order Traversal of Normal BST : " << endl;
//     levelOrderTraversal(root);
//
//     Node* newRoot = NormalToBalance(root);
//
//     cout << endl << "Level Order Traversal of Balanced BST : " << endl;
//     levelOrderTraversal(newRoot);
//
//     return 0;
// }
//
// // 10 8 12 5 15 2 18 -1
// 5 3 6 4 2 7 8 -1



