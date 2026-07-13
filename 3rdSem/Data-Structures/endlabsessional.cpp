// Task1 (10 Marks)
// Scenario: Smart University Service Management System
// A smart university uses a single system to manage multiple services such as printing, emergency requests, and student records.

// You are required to design a system with the following components:
//     1. Linear Queue (Array-based)
// Manage student print requests.
// Each request has: Request ID, Number of Pages.
// Implement enqueue and dequeue operations.
// Handle overflow and underflow conditions properly.


//     2. Priority Queue
// Emergency service requests are processed using priority levels
// (1 = High, 2 = Medium, 3 = Low).
// Requests with the same priority must follow FIFO order.



//     3. Binary Search Tree (BST)
// After processing, store student IDs in a BST.
// Display:
// Minimum student ID
// Maximum student ID


// Task 2 (15 Marks)
// Scenario: Campus Navigation & Performance Analysis System
// A university wants to analyze campus connectivity and student performance data.
// You are required to:
//     1. Graph Representation
//         ◦ Represent campus buildings using an Adjacency List.
//         ◦ Perform Breadth First Search (BFS) traversal starting from the Main Gate.
//     2. Depth First Search (DFS)
//         ◦ Perform DFS traversal on the same graph.
//     3. Heap & Sorting Analysis
//         ◦ Store student performance scores in a dynamic structure.
//         ◦ Implement:
//             ▪ Max Heap (array-based) to track top performers
//             ▪ Quick Sort to sort all scores
// Constraint:
// Built-in sorting or heap libraries are not allowed.








// #include <iostream>
// using namespace std;
// #define SIZE 5
// int queue[SIZE];
// int front = -1, rear = -1;

// void enqueue(int val) {
// if (rear == SIZE - 1) {
// cout << "Queue Overflow\n";
// return;
// }
// if (front == -1) front = 0;
// queue[++rear] = val;
// }

// void dequeue() {
// if (front == -1 || front > rear) {
// cout << "Queue Underflow\n";
// return;
// }
// cout << "Deleted: " << queue[front++] << endl;
// }

// int main() {
// enqueue(10);
// enqueue(20);
// enqueue(30);
// dequeue();
// return 0;
// }



// #include <iostream>
// using namespace std;
// #define SIZE 5
// int queue[SIZE];
// int front = 0, rear = -1, count = 0;

// void enqueue(int val) {
// if (count == SIZE) {
// cout << "Queue Full\n";
// return;
// }

// rear = (rear + 1) % SIZE;
// queue[rear] = val;
// count++;
// }

// void dequeue() {
// if (count == 0) {
// cout << "Queue Empty\n";
// return;
// }
// cout << "Dequeued: " << queue[front] << endl;
// front = (front + 1) % SIZE;
// count--;
// }


// void display() {
// int i = front;
// for (int c = 0; c < count; c++) {
// cout << queue[i] << endl;
// i = (i + 1) % SIZE;
// }
// cout << "Count: " << count << endl;
// }
// int main() {
// enqueue(1);
// enqueue(2);
// enqueue(3);
// display();
// dequeue();
// display();
// return 0;
// }





// #include<iostream>
// using namespace std;

// struct BSTNode{
//     int id;
//     int Page;
//     int *left, *right;
// };


// BSTNode* createBSTNode(int id) {
//     BSTNode* newNode = new BSTNode();
//     newNode->page = id;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// BSTNode* insertBSTNode(int id)
// {
//     newNode 
// }





// #include<iostream>
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


    
// int main ()
// {
//     int arr[] = {22, 67, 8, 9, 12};
//     int n = sizeof(arr)/sizeof(arr[0]);


//     for(int i = n/2 - 1; i >= 0; i--)
//     heapify(arr, n, i);

//     cout << "Max Heap: ";
//     for(int i = 0; i < n; i++)
//     cout << arr[i] << " ";

//     return 0;
// }    







// struct PQNode {
//     int id;
//     int priority;
//     PQNode* next;
// };

// void enqueue ( int id, int p)
// {
//     PQNode* newNode = newNode();
//     negate  id -> next;
//     newNode id = priority = p;

// }