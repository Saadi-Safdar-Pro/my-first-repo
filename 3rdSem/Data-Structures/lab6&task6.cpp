// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() {
//         head = NULL;
//         tail = NULL;
//     }

//     Node* createNode(int value) {
//         Node* temp = new Node;
//         if (temp == NULL) {
//             cout << "Memory not allocated!" << endl;
//             return NULL;
//         }
//         temp->data = value;
//         temp->next = NULL;
//         return temp;
//     }

//     void insertBegin(int value) {
//         Node* temp = createNode(value);
//         if (head == NULL) {
//             head = tail = temp;
//         } else {
//             temp->next = head;
//             head = temp;
//         }
//         cout << "Inserted " << value << " at beginning.\n";
//     }

//     void insertLast(int value) {
//         Node* temp = createNode(value);
//         if (head == NULL) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//         cout << "Inserted " << value << " at end.\n";
//     }

//     void insertPos(int value, int pos) {
//         Node* temp = createNode(value);
//         if (pos < 1) {
//             cout << "Position should be >= 1\n";
//             return;
//         }
//         if (pos == 1) {
//             temp->next = head;
//             head = temp;
//             if (tail == NULL) tail = temp;
//             cout << "Inserted " << value << " at position " << pos << endl;
//             return;
//         }
//         Node* current = head;
//         for (int i = 1; i < pos - 1; i++) {
//             if (current == NULL) {
//                 cout << "Position out of range\n";
//                 return;
//             }
//             current = current->next;
//         }
//         if (current == NULL) {
//             cout << "Position out of range\n";
//             return;
//         }
//         temp->next = current->next;
//         current->next = temp;
//         if (temp->next == NULL) tail = temp;
//         cout << "Inserted " << value << " at position " << pos << endl;
//     }

//     void deletePos(int pos) {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         if (pos < 1) {
//             cout << "Invalid position\n";
//             return;
//         }
//         Node* temp;
//         if (pos == 1) {
//             temp = head;
//             head = head->next;
//             if (head == NULL) tail = NULL;
//             delete temp;
//             cout << "Deleted node at position 1\n";
//             return;
//         }
//         Node* current = head;
//         for (int i = 1; i < pos - 1; i++) {
//             if (current == NULL) {
//                 cout << "Position out of range\n";
//                 return;
//             }
//             current = current->next;
//         }
//         if (current->next == NULL) {
//             cout << "Position out of range\n";
//             return;
//         }
//         temp = current->next;
//         current->next = temp->next;
//         if (current->next == NULL) tail = current;
//         delete temp;
//         cout << "Deleted node at position " << pos << endl;
//     }

//     void updateNode(int pos, int value) {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         Node* current = head;
//         for (int i = 1; i < pos; i++) {
//             if (current == NULL) {
//                 cout << "Position out of range\n";
//                 return;
//             }
//             current = current->next;
//         }
//         if (current == NULL) {
//             cout << "Position out of range\n";
//             return;
//         }
//         current->data = value;
//         cout << "Updated node at position " << pos << " to " << value << endl;
//     }

//     void searchElement(int value) {
//         Node* current = head;
//         int pos = 1;
//         bool found = false;
//         while (current != NULL) {
//             if (current->data == value) {
//                 cout << "Element " << value << " found at position " << pos << endl;
//                 found = true;
//                 break;
//             }
//             current = current->next;
//             pos++;
//         }
//         if (!found) cout << "Element " << value << " not found\n";
//     }

//     void display() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         Node* current = head;
//         cout << "Linked List: ";
//         while (current != NULL) {
//             cout << current->data << " -> ";
//             current = current->next;
//         }
//         cout << "NULL\n";
//     }

//     void reverse() {
//         Node* prev = NULL;
//         Node* current = head;
//         Node* next = NULL;
//         tail = head;
//         while (current != NULL) {
//             next = current->next;
//             current->next = prev;
//             prev = current;
//             current = next;
//         }
//         head = prev;
//         cout << "Linked List reversed\n";
//     }

//     void sortList() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         for (Node* i = head; i != NULL; i = i->next) {
//             for (Node* j = i->next; j != NULL; j = j->next) {
//                 if (i->data > j->data) {
//                     int temp = i->data;
//                     i->data = j->data;
//                     j->data = temp;
//                 }
//             }
//         }
//         cout << "Linked List sorted in ascending order\n";
//     }
// };

// int main() {
//     LinkedList list;
//     int choice, value, pos;

//     do {
//         cout << "\n\n--- Linked List Operations ---\n";
//         cout << "1. Insert at Beginning\n";
//         cout << "2. Insert at End\n";
//         cout << "3. Insert at Position\n";
//         cout << "4. Delete at Position\n";
//         cout << "5. Update Node\n";
//         cout << "6. Search Element\n";
//         cout << "7. Display List\n";
//         cout << "8. Reverse List\n";
//         cout << "9. Sort List\n";
//         cout << "10. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 list.insertBegin(value);
//                 break;
//             case 2:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 list.insertLast(value);
//                 break;
//             case 3:
//                 cout << "Enter value: ";
//                 cin >> value;
//                 cout << "Enter position: ";
//                 cin >> pos;
//                 list.insertPos(value, pos);
//                 break;
//             case 4:
//                 cout << "Enter position to delete: ";
//                 cin >> pos;
//                 list.deletePos(pos);
//                 break;
//             case 5:
//                 cout << "Enter position to update: ";
//                 cin >> pos;
//                 cout << "Enter new value: ";
//                 cin >> value;
//                 list.updateNode(pos, value);
//                 break;
//             case 6:
//                 cout << "Enter element to search: ";
//                 cin >> value;
//                 list.searchElement(value);
//                 break;
//             case 7:
//                 list.display();
//                 break;
//             case 8:
//                 list.reverse();
//                 break;
//             case 9:
//                 list.sortList();
//                 break;
//             case 10:
//                 cout << "Exiting...\n";
//                 break;
//             default:
//                 cout << "Invalid choice!\n";
//         }
//     } while (choice != 10);

//     return 0;
// }





// Lab Tasks:


// Problem 1 – Linked List Insertion & Display
// Task:
// 1. Write a program to create a Singly Linked List.
// 2. Implement functions to:
// o Insert a node at the beginning
// o Insert a node at the end
// o Insert a node at a specific position
// 3. Implement a function display() to traverse and print the linked list.
// Test Case:
// • Insert 10 at beginning, 20 at end, 15 at position 2.
// • Expected Output: 10 -> 15 -> 20 -> NULL


// Problem 2 – Searching & Deletion in Linked List
// Task:
// 1. Implement a function searchElement(int value) to find the position of a value in the list.
// 2. Implement a function deletePos(int pos) to delete a node at a given position.
// 3. Test both functions with your linked list.
// Test Case:
// • Current List: 5 -> 10 -> 15 -> 20 -> NULL
// • Search for 15 → Output: Element 15 found at position 3
// • Delete node at position 2 → Resulting List: 5 -> 15 -> 20 -> NULL






// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() {
//         head = NULL;
//         tail = NULL;
//     }

//     Node* createNode(int value) {
//         Node* temp = new Node;
//         temp->data = value;
//         temp->next = NULL;
//         return temp;
//     }

//     void insertBegin(int value) {
//         Node* temp = createNode(value);
//         if (head == NULL) {
//             head = tail = temp;
//         } else {
//             temp->next = head;
//             head = temp;
//         }
//     }

//     void insertLast(int value) {
//         Node* temp = createNode(value);
//         if (head == NULL) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     void insertPos(int value, int pos) {
//         if (pos < 1) {
//             cout << "Position should be >= 1\n";
//             return;
//         }
//         if (pos == 1) {
//             insertBegin(value);
//             return;
//         }
//         Node* temp = createNode(value);
//         Node* current = head;
//         for (int i = 1; i < pos - 1; i++) {
//             if (current == NULL) {
//                 cout << "Position out of range\n";
//                 return;
//             }
//             current = current->next;
//         }
//         if (current == NULL) {
//             cout << "Position out of range\n";
//             return;
//         }
//         temp->next = current->next;
//         current->next = temp;
//         if (temp->next == NULL) {
//             tail = temp;
//         }
//     }

//     void display() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         Node* current = head;
//         cout << "Linked List: ";
//         while (current != NULL) {
//             cout << current->data << " -> ";
//             current = current->next;
//         }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     LinkedList list;
//     int choice, value, pos;
//     do {
//         cout << "\n--- Linked List Operations ---\n";
//         cout << "1. Insert at Beginning\n";
//         cout << "2. Insert at End\n";
//         cout << "3. Insert at Position\n";
//         cout << "4. Display List\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//         case 1:
//             cout << "Enter value: "; cin >> value;
//             list.insertBegin(value);
//             break;
//         case 2:
//             cout << "Enter value: "; cin >> value;
//             list.insertLast(value);
//             break;
//         case 3:
//             cout << "Enter value: "; cin >> value;
//             cout << "Enter position: "; cin >> pos;
//             list.insertPos(value, pos);
//             break;
//         case 4:
//             list.display();
//             break;
//         case 5:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 5);
//     return 0;
// }









// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class LinkedList {
// private:
//     Node* head;
//     Node* tail;

// public:
//     LinkedList() {
//         head = NULL;
//         tail = NULL;
//     }

//     Node* createNode(int value) {
//         Node* temp = new Node;
//         temp->data = value;
//         temp->next = NULL;
//         return temp;
//     }

//     void insertLast(int value) {
//         Node* temp = createNode(value);
//         if (head == NULL) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     void searchElement(int value) {
//         Node* current = head;
//         int pos = 1;
//         while (current != NULL) {
//             if (current->data == value) {
//                 cout << "Element " << value << " found at position " << pos << endl;
//                 return;
//             }
//             current = current->next;
//             pos++;
//         }
//         cout << "Element " << value << " not found\n";
//     }

//     void deletePos(int pos) {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         if (pos < 1) {
//             cout << "Invalid position\n";
//             return;
//         }
//         if (pos == 1) {
//             Node* temp = head;
//             head = head->next;
//             if (head == NULL) tail = NULL;
//             delete temp;
//             cout << "Deleted node at position 1\n";
//             return;
//         }
//         Node* current = head;
//         for (int i = 1; i < pos - 1; i++) {
//             if (current == NULL) {
//                 cout << "Position out of range\n";
//                 return;
//             }
//             current = current->next;
//         }
//         if (current == NULL || current->next == NULL) {
//             cout << "Position out of range\n";
//             return;
//         }
//         Node* temp = current->next;
//         current->next = temp->next;
//         if (current->next == NULL) {
//             tail = current;
//         }
//         delete temp;
//         cout << "Deleted node at position " << pos << endl;
//     }

//     void display() {
//         if (head == NULL) {
//             cout << "List is empty\n";
//             return;
//         }
//         Node* current = head;
//         cout << "Linked List: ";
//         while (current != NULL) {
//             cout << current->data << " -> ";
//             current = current->next;
//         }
//         cout << "NULL\n";
//     }
// };

// int main() {
//     LinkedList list;
//     int choice, value, pos;
//     do {
//         cout << "\n--- Linked List Operations ---\n";
//         cout << "1. Insert at End\n";
//         cout << "2. Search Element\n";
//         cout << "3. Delete at Position\n";
//         cout << "4. Display List\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         switch (choice) {
//         case 1:
//             cout << "Enter value: "; cin >> value;
//             list.insertLast(value);
//             break;
//         case 2:
//             cout << "Enter element to search: "; cin >> value;
//             list.searchElement(value);
//             break;
//         case 3:
//             cout << "Enter position to delete: "; cin >> pos;
//             list.deletePos(pos);
//             break;
//         case 4:
//             list.display();
//             break;
//         case 5:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice!\n";
//         }
//     } while (choice != 5);
//     return 0;
// }
