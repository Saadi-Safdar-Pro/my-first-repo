// #include <iostream>
// using namespace std;

// struct BSTNode {
//     int eventID;
//     BSTNode *left, *right;
// };

// struct PQNode {
//     int id;
//     int priority;
//     PQNode* next;
// };

// BSTNode* createBSTNode(int id) {
//     BSTNode* newNode = new BSTNode();
//     newNode->eventID = id;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// BSTNode* insertBST(BSTNode* root, int id) {
//     if (root == NULL) return createBSTNode(id);
//     if (id < root->eventID)
//         root->left = insertBST(root->left, id);
//     else
//         root->right = insertBST(root->right, id);
//     return root;
// }

// class TrafficManager {
//     PQNode* front;
//     BSTNode* root;

// public:
//     TrafficManager() {
//         front = NULL;
//         root = NULL;
//     }

//     void enqueue(int id, int p) {
//         PQNode* newNode = new PQNode;
//         newNode->id = id;
//         newNode->priority = p;

//         if (front == NULL || p < front->priority) {
//             newNode->next = front;
//             front = newNode;
//         } else {
//             PQNode* q = front;
//             while (q->next != NULL && q->next->priority <= p) {
//                 q = q->next;
//             }
//             newNode->next = q->next;
//             q->next = newNode;
//         }
//     }

//     void processEvents() {
//         while (front != NULL) {
//             PQNode* temp = front;
//             cout << "Processing Event ID: " << temp->id << " (Priority: " << temp->priority << ")\n";
//             root = insertBST(root, temp->id);
//             front = front->next;
//             delete temp;
//         }
//     }

//     void findMin() {
//         if (root == NULL) return;
//         BSTNode* curr = root;
//         while (curr->left != NULL) curr = curr->left;
//         cout << "Minimum Event ID: " << curr->eventID << endl;
//     }

//     void findMax() {
//         if (root == NULL) return;
//         BSTNode* curr = root;
//         while (curr->right != NULL) curr = curr->right;
//         cout << "Maximum Event ID: " << curr->eventID << endl;
//     }
// };

// int main() {
//     TrafficManager system;

//     system.enqueue(101, 1);
//     system.enqueue(505, 1);
//     system.enqueue(210, 2);
//     system.enqueue(155, 2);
//     system.enqueue(340, 3);
//     system.enqueue(480, 4);
//     system.enqueue(275, 4);
//     system.enqueue(99, 5);

//     system.processEvents();
//     system.findMin();
//     system.findMax();

//     return 0;
// }






















// #include <iostream>
// using namespace std;

// struct BSTNode {
//     int eventID;
//     BSTNode *left, *right;
// };

// struct Event {
//     int id;
//     int priority;
// };

// class TrafficSystem {
//     Event pq[50]; 
//     int size;
//     BSTNode* root;

// public:
//     TrafficSystem() {
//         size = 0;
//         root = NULL;
//     }

//     BSTNode* createBSTNode(int id) {
//         BSTNode* newNode = new BSTNode();
//         newNode->eventID = id;
//         newNode->left = newNode->right = NULL;
//         return newNode;
//     }

//     BSTNode* insertBST(BSTNode* node, int id) {
//         if (node == NULL) return createBSTNode(id);
//         if (id < node->eventID)
//             node->left = insertBST(node->left, id);
//         else
//             node->right = insertBST(node->right, id);
//         return node;
//     }

//     void enqueue(int id, int p) {
//         int i = size - 1;
//         while (i >= 0 && pq[i].priority > p) {
//             pq[i + 1] = pq[i];
//             i--;
//         }
//         pq[i + 1].id = id;
//         pq[i + 1].priority = p;
//         size++;
//     }

//     void processAndAudit() {
//         cout << "\n--- Processing Events in Priority Order ---" << endl;
//         for (int i = 0; i < size; i++) {
//             cout << "Processing ID: " << pq[i].id << " | Priority: " << pq[i].priority << endl;
//             root = insertBST(root, pq[i].id);
//         }
//     }

//     void findMin() {
//         if (!root) return;
//         BSTNode* curr = root;
//         while (curr->left) curr = curr->left;
//         cout << "Minimum Event ID (Audit BST): " << curr->eventID << endl;
//     }

//     void findMax() {
//         if (!root) return;
//         BSTNode* curr = root;
//         while (curr->right) curr = curr->right;
//         cout << "Maximum Event ID (Audit BST): " << curr->eventID << endl;
//     }
// };

// int main() {
//     TrafficSystem city;
//     int n, id, p;

//     cout << "Enter number of events to input: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << "\nEvent " << i + 1 << endl;
//         cout << "Enter Event ID: ";
//         cin >> id;
//         cout << "Enter Priority Level: ";
//         cin >> p;
//         city.enqueue(id, p);
//     }

//     city.processAndAudit();
//     cout << "\n--- Audit Results ---" << endl;
//     city.findMin();
//     city.findMax();

//     return 0;
// }
