// #include <iostream>
// using namespace std;

// struct Node {
// int data;
// Node* left;
// Node* right;
// };

// Node* createNode(int value) {
// Node* newNode = new Node();
// newNode->data = value;
// newNode->left = NULL;
// newNode->right = NULL;
// return newNode;
// }

// Node* insert(Node* root, int value) {
// if (root == NULL)
// return createNode(value);
// if (value < root->data)
// root->left = insert(root->left, value);
// else if (value > root->data)
// root->right = insert(root->right, value);
// return root;
// }

// void inorder(Node* root) {
// if (root != NULL) {
// inorder(root->left);
// cout << root->data << " ";
// inorder(root->right);
// }
// }

// int findMin(Node* root) {
// while (root->left != NULL)
// root = root->left;
// return root->data;
// }

// int findMax(Node* root) {
// while (root->right != NULL)
// root = root->right;
// return root->data;
// }

// int main() {
// Node* root = NULL;
// int values[] = {50, 30, 70, 20, 40, 60, 80};
// for (int value : values)
// root = insert(root, value);

// cout << "In-order Traversal: ";
// inorder(root);
// cout << "\nMinimum Value: " << findMin(root);
// cout << "\nMaximum Value: " << findMax(root);
// return 0;
// }





// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// Node* insert(Node* root, int value) {
//     if (root == NULL)
//         return createNode(value);
    
//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else if (value > root->data)
//         root->right = insert(root->right, value);
        
//     return root;
// }

// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }

// int findMin(Node* root) {
//     if (root == NULL) return -1;
//     while (root->left != NULL)
//         root = root->left;
//     return root->data;
// }

// int findMax(Node* root) {
//     if (root == NULL) return -1;
//     while (root->right != NULL)
//         root = root->right;
//     return root->data;
// }

// int countNodes(Node* root) {
//     if (root == NULL)
//         return 0;
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }

// int main() {
//     Node* root = NULL;
//     int val;

//     for(int i = 0; i < 10; i++) {
//         cin >> val;
//         root = insert(root, val);
//     }
 
//     cout << "In-order Traversal: ";
//     inorder(root);    

//     cout << "\nMinimum Value: " << findMin(root);
//     cout << "\nMaximum Value: " << findMax(root);
//     cout << "\nNumber of Nodes: " << countNodes(root) << endl;

//     return 0;
// }








// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* createNode(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// Node* insert(Node* root, int value) {
//     if (root == NULL)
//         return createNode(value);
    
//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else if (value > root->data)
//         root->right = insert(root->right, value);
        
//     return root;
// }

// void inorder(Node* root) {
//     if (root != NULL) {
//         inorder(root->left);
//         cout << root->data << " ";
//         inorder(root->right);
//     }
// }

// void preorder(Node* root) {
//     if (root != NULL) {
//         cout << root->data << " ";
//         preorder(root->left);
//         preorder(root->right);
//     }
// }

// void postorder(Node* root) {
//     if (root != NULL) {
//         postorder(root->left);
//         postorder(root->right);
//         cout << root->data << " ";
//     }
// }

// int findMin(Node* root) {
//     if (root == NULL) return -1;
//     while (root->left != NULL)
//         root = root->left;
//     return root->data;
// }

// int findMax(Node* root) {
//     if (root == NULL) return -1;
//     while (root->right != NULL)
//         root = root->right;
//     return root->data;
// }

// int countNodes(Node* root) {
//     if (root == NULL)
//         return 0;
//     return 1 + countNodes(root->left) + countNodes(root->right);
// }

// int main() {
//     Node* root = NULL;
//     int val;

//     cout << "Enter 10 integer values:" << endl;
//     for(int i = 0; i < 10; i++) {
//         cin >> val;
//         root = insert(root, val);
//     }

//     cout << "\nIn-order Traversal: ";
//     inorder(root);
    
//     cout << "\nPre-order Traversal: ";
//     preorder(root);
    
//     cout << "\nPost-order Traversal: ";
//     postorder(root);

//     cout << "\n\nMinimum value: " << findMin(root);
//     cout << "\nMaximum value: " << findMax(root);
//     cout << "\nTotal number of nodes: " << countNodes(root) << endl;

//     return 0;
// }







// #include <iostream>
// using namespace std;

// void heapify(int arr[], int n, int i) 
// {
//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if(left < n && arr[left] > arr[largest])
//         largest = left;

//     if(right < n && arr[right] > arr[largest])
//         largest = right;

//    if(largest != i) 
//         {
//         swap(arr[i], arr[largest]);
//         heapify(arr, n, largest);
//         }
// }

// int main() 
// {
//     int arr[] = {10, 20, 15, 30, 40};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     for(int i = n/2 - 1; i >= 0; i--)
//     heapify(arr, n, i);

//     cout << "Max Heap: ";
//     for(int i = 0; i < n; i++)
//     cout << arr[i] << " ";

//     return 0;
// }





#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i) 
{
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] < arr[smallest])
        smallest = left;

    if(right < n && arr[right] < arr[smallest])
        smallest = right;

    if(smallest != i) 
    {
        swap(arr[i], arr[smallest]);
        heapify(arr, n, smallest);
    }
}

int main() 
{
    int arr[] = {40, 30, 15, 20, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    cout << "Min Heap: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
    return 0;
}