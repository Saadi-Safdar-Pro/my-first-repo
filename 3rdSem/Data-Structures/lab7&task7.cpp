// #include <iostream>
// using namespace std;

// // Node structure for Doubly Linked List

// struct Node
// {
// int data;
// Node* next;
// Node* prev;
// };
// Node* start = NULL;

// // Doubly Linked List Class

// class DoublyList
// {
// public:
// DoublyList()
// {
// start = NULL;
// }

// void create_node(int value);
// void insert_begin(int value);
// void insert_after(int value, int position);
// void delete_node(int value);
// void display();
// void count_nodes();
// void reverse_list();
// };

// // Create (Append) Node at End

// void DoublyList::create_node(int value)
// {
// Node* temp = new Node;
// temp->data = value;
// temp->next = NULL;
// if (start == NULL)
// {
// temp->prev = NULL;
// start = temp;
// }
// else
// {
// Node* ptr = start;
// while (ptr->next != NULL)
// {
// ptr = ptr->next;
// }
// ptr->next = temp;
// temp->prev = ptr;
// }
// cout << "Node inserted at end." << endl;
// }

// // Insert at Beginning

// void DoublyList::insert_begin(int value)
// {
// Node* temp = new Node;
// temp->data = value;
// temp->prev = NULL;
// temp->next = start;
// if (start != NULL)
// {
// start->prev = temp;
// }
// start = temp;
// cout << "Node inserted at beginning." << endl;
// }

// // Insert After Given Position

// void DoublyList::insert_after(int value, int position)
// {
// if (start == NULL)
// {
// cout << "List is empty. Create list first." << endl;
// return;
// }
// Node* ptr = start;
// for (int i = 1; i < position; i++)
// {
// ptr = ptr->next;
// if (ptr == NULL)
// {
// cout << "Position out of range." << endl;
// return;
// }
// }

// Node* temp = new Node;
// temp->data = value;
// temp->next = ptr->next;
// temp->prev = ptr;
// if (ptr->next != NULL)
// {
// ptr->next->prev = temp;
// }
// ptr->next = temp;
// cout << "Node inserted after position " << position << "." << endl;
// }

// // Delete Node by Value

// void DoublyList::delete_node(int value)
// {
// if (start == NULL)
// {
// cout << "List is empty." << endl;
// return;
// }
// Node* ptr = start;
// // delete first node
// if (ptr->data == value)
// {
// start = ptr->next;
// if (start != NULL)
// {
// start->prev = NULL;
// }
// delete ptr;
// cout << "Node deleted." << endl;
// return;
// }

// // search
// while (ptr != NULL && ptr->data != value)
// {
// ptr = ptr->next;
// }
// if (ptr == NULL)
// {
// cout << "Node not found." << endl;
// return;
// }

// // delete middle or last

// if (ptr->next != NULL)
// {
// ptr->next->prev = ptr->prev;
// }
// ptr->prev->next = ptr->next;
// delete ptr;
// cout << "Node deleted." << endl;
// }

// // Display

// void DoublyList::display()
// {
// if (start == NULL)
// {
// cout << "List is empty." << endl;
// return;
// }
// Node* ptr = start;
// cout << "Doubly Linked List: ";
// while (ptr != NULL)
// {
// cout << ptr->data << " <-> ";
// ptr = ptr->next;

// }
// cout << "NULL" << endl;
// }

// // Count Nodes

// void DoublyList::count_nodes()
// {
// Node* ptr = start;
// int count = 0;
// while (ptr != NULL)
// {
// count++;
// ptr = ptr->next;
// }
// cout << "Total nodes: " << count << endl;
// }

// // Reverse List

// void DoublyList::reverse_list()
// {
// if (start == NULL)
// {
// cout << "List is empty." << endl;
// return;
// }
// Node* p1 = start;
// Node* p2 = p1->next;
// p1->next = NULL;
// p1->prev = p2;
// while (p2 != NULL)
// {
// p2->prev = p2->next;
// p2->next = p1;
// p1 = p2;
// p2 = p2->prev;
// }

// start = p1;
// cout << "List reversed." << endl;
// }

// // MAIN

// int main()
// {
// DoublyList dl;
// int choice, value, pos;
// while (true)
// {
// cout << "\n--- Doubly Linked List Menu ---\n";
// cout << "1. Create Node (Append)\n";
// cout << "2. Insert at Beginning\n";
// cout << "3. Insert After Position\n";
// cout << "4. Delete Node\n";
// cout << "5. Display List\n";
// cout << "6. Count Nodes\n";
// cout << "7. Reverse List\n";
// cout << "8. Exit\n";
// cout << "Enter choice: ";
// cin >> choice;
// if (choice == 8)
// {
// return 0;
// }
// switch (choice)
// {
// case 1:
// cout << "Enter value: ";
// cin >> value;
// dl.create_node(value);
// break;
// case 2:
// cout << "Enter value: ";
// cin >> value;

// dl.insert_begin(value);
// break;
// case 3:
// cout << "Enter value: ";
// cin >> value;
// cout << "Enter position: ";
// cin >> pos;
// dl.insert_after(value, pos);
// break;
// case 4:
// cout << "Enter value to delete: ";
// cin >> value;
// dl.delete_node(value);
// break;
// case 5:
// dl.display();
// break;
// case 6:
// dl.count_nodes();
// break;
// case 7:
// dl.reverse_list();
// break;
// default:
// cout << "Invalid choice!" << endl;
// }
// }
// }


//--------------------------------------------------------------------------------------------------------


// #include <iostream>
// using namespace std;
// // Structure
// struct node {
// int val;
// node* next; // address of next node
// node* prev; // address of previous node
// };
// // Class
// class linkList {
// private:
// node* head;
// node* tail;
// public:
// // Constructor
// linkList() {
// head = NULL;
// tail = NULL;
// }

// // Add element at first
// void insert(int v) {
// if (head == NULL) // if list is empty create first node
// {
// node* n = new node;
// n->val = v;
// n->next = NULL;
// n->prev = NULL;
// head = n;
// tail = n;
// }
// else {
// node* p = new node;
// p->val = v;
// p->prev = NULL;
// p->next = head;
// head->prev = p;
// head = p; // new head
// }
// }
// // Add to last
// void addaToRear(int z) {
// node* b = new node;
// b->val = z;
// b->next = NULL;
// b->prev = tail;
// tail->next = b;
// tail = b;
// }
// // Insertion after given number (middle)
// void middle(int n, int a) {
// if (head == NULL) {
// insert(n);
// }
// else {
// node* p = head;
// while (p->next != NULL) {

// if (p->val == n) {
// break;
// }
// p = p->next;
// }
// node* ptr = new node;
// ptr->val = a;
// ptr->next = p->next;
// ptr->prev = p;
// p->next = ptr;
// }
// }
// // Delete first node
// void delAtFirst() {
// node* ptr = head;
// head = head->next;
// head->prev = NULL;
// delete(ptr);
// }
// // Delete last node
// void delAtLast() {
// node* ptr = tail;
// tail = tail->prev;
// tail->next = NULL;
// delete(ptr);
// }
// // Delete at middle
// void deleAtMiddle(int v) {
// node* ptr = head;
// while (ptr->val != v) {
// ptr = ptr->next;
// }
// node* p = ptr;
// p->next = ptr->next;

// p->prev = ptr->prev;
// p->next->prev = p->prev;
// p->prev->next = p->next;
// delete(ptr);
// }
// // Traversing
// void display() {
// node* ptr = head;
// while (ptr != NULL) {
// cout << ptr->val << endl;
// ptr = ptr->next;
// }
// }
// };
// // Main
// int main() {
// linkList l1;
// l1.insert(43);
// l1.insert(54);
// l1.insert(5);
// l1.addaToRear(4);
// l1.delAtLast();
// l1.middle(43, 77); // 43 is the node after which 77 will be added
// l1.middle(5, 7);
// l1.delAtFirst();
// l1.deleAtMiddle(43);
// l1.display();
// }


//--------------------------------------------------------------------------------------------------------


// Create a list of atleast 5 nodes
// data values should be 15, 13, 20, 24, 2
// Insert at 2nd position: 45
// Insert at beginning: 5
// Insert at end: 37 through tail pointers

// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node* prev;
// };

// Node* head = NULL;

// void insertBeginning(int value)
// {
//     Node* newNode = new Node();
//     newNode->data = value;

//     newNode->prev = NULL;
//     newNode->next = head;

//     if (head != NULL)
//     {
//         head->prev = newNode;
//     }

//     head = newNode;

//     cout << "Inserted at beginning: " << value << endl;
// }

// void insertEnd(int value)
// {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;


//     if (head == NULL)
//     {
//         newNode->prev = NULL;
//         head = newNode;
//         cout << "Inserted at end: " << value << endl;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     newNode->prev = temp;

//     cout << "Inserted at end: " << value << endl;
// }

// void insertAtPosition(int value, int pos)
// {
//     if (pos < 1)
//     {
//         cout << "Position should be >= 1\n";
//         return;
//     }

//     if (pos == 1)
//     {
//         insertBeginning(value);
//         return;
//     }

//     Node* newNode = new Node();
//     newNode->data = value;

//     Node* temp = head;
//     for (int i = 1; i < pos - 1; i++)
//     {
//         if (temp == NULL)
//         {
//             cout << "Position out of range\n";
//             return;
//         }
//         temp = temp->next;
//     }

//     if (temp == NULL)
//     {
//         cout << "Position out of range\n";
//         return;
//     }

//     newNode->next = temp->next;
//     newNode->prev = temp;

//     if (temp->next != NULL)
//     {
//         temp->next->prev = newNode;
//     }

//     temp->next = newNode;

//     cout << "Inserted " << value << " at position " << pos << endl;
// }

// void displayList()
// {
//     Node* temp = head;
//     cout << "Doubly Linked List: ";
//     while (temp != NULL)
//     {
//         cout << temp->data << " <-> ";
//         temp = temp->next;
//     }
//     cout << "NULL\n";
// }

// int main()
// {
//     insertEnd(15);
//     insertEnd(13);
//     insertEnd(20);
//     insertEnd(24);
//     insertEnd(2);

//     insertAtPosition(45, 2);
//     insertBeginning(5);
//     insertEnd(37);

//     displayList();

//     return 0;
// }


//--------------------------------------------------------------------------------------------------------


//Insert a new node after the 3rd position in the doubly linked list.
//Search for the value in the doubly linked list and return its position. If not found, display .
//Count the total number of nodes in the doubly linked list and display the result.
//Insert the value at the end of the list using the , without traversing the list, and update the tail to point to the new last node.


// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
//     Node* prev;
// };

// Node* head = NULL;
// Node* tail = NULL;

// void insertEnd(int value) {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = NULL;

//     if (head == NULL) {
//         newNode->prev = NULL;
//         head = newNode;
//         tail = newNode;
//         return;
//     }

//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = newNode;
// }

// void insertAfterPosition(int value, int pos) {
//     Node* temp = head;
//     for (int i = 1; i < pos; i++) {
//         temp = temp->next;
//     }

//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = temp->next;
//     newNode->prev = temp;
    
//     if (temp->next != NULL) {
//         temp->next->prev = newNode;
//     } else {
//         tail = newNode;
//     }
    
//     temp->next = newNode;
// }

// int searchValue(int value) {
//     Node* temp = head;
//     int position = 1;
//     while (temp != NULL) {
//         if (temp->data == value) {
//             return position;
//         }
//         temp = temp->next;
//         position++;
//     }
//     return -1;
// }

// int countNodes() {
//     Node* temp = head;
//     int count = 0;
//     while (temp != NULL) {
//         count++;
//         temp = temp->next;
//     }
//     return count;
// }

// void displayList() {
//     Node* temp = head;
//     cout << "Doubly Linked List: ";
//     while (temp != NULL) {
//         cout << temp->data << " <-> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// int main() {
//     insertEnd(10);
//     insertEnd(20);
//     insertEnd(30);
//     insertEnd(40);
//     insertEnd(50);
    
//     cout << "Initial list:" << endl;
//     displayList();
    
//     cout << "\nInserting 25 after 3rd position:" << endl;
//     insertAfterPosition(25, 3);
//     displayList();
    
//     int searchVal = 30;
//     int pos = searchValue(searchVal);
//     if (pos != -1) {
//         cout << "Value " << searchVal << " found at position: " << pos << endl;
//     }
    
//     int totalNodes = countNodes();
//     cout << "Total number of nodes in the list: " << totalNodes << endl;
    
//     cout << "Inserting 60 at the end using tail pointer:" << endl;
//     insertEnd(60);
//     displayList();
    
//     totalNodes = countNodes();
//     cout << "\nFinal total nodes: " << totalNodes << endl;
    
//     return 0;
// }