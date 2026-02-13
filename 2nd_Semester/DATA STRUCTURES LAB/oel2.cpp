#include <iostream>
using namespace std;

struct BSTNode {
    int eventID;
    BSTNode *left, *right;
};

struct Event {
    int id;
    int priority;
};

class TrafficSystem {
    Event pq[50]; 
    int size;
    BSTNode* root;

public:
    TrafficSystem() {
        size = 0;
        root = NULL;
    }

    BSTNode* createBSTNode(int id) {
        BSTNode* newNode = new BSTNode();
        newNode->eventID = id;
        newNode->left = newNode->right = NULL;
        return newNode;
    }

    BSTNode* insertBST(BSTNode* node, int id) {
        if (node == NULL) return createBSTNode(id);
        if (id < node->eventID)
            node->left = insertBST(node->left, id);
        else
            node->right = insertBST(node->right, id);
        return node;
    }

    void enqueue(int id, int p) {
        int i = size - 1;
        while (i >= 0 && pq[i].priority > p) {
            pq[i + 1] = pq[i];
            i--;
        }
        pq[i + 1].id = id;
        pq[i + 1].priority = p;
        size++;
    }

    void processAndAudit() {
        cout << "\n--- Processing Events in Priority Order ---" << endl;
        for (int i = 0; i < size; i++) {
            cout << "Processing ID: " << pq[i].id << " | Priority: " << pq[i].priority << endl;
            root = insertBST(root, pq[i].id);
        }
    }

    void findMin() {
        if (!root) return;
        BSTNode* curr = root;
        while (curr->left) curr = curr->left;
        cout << "Minimum Event ID (Audit BST): " << curr->eventID << endl;
    }

    void findMax() {
        if (!root) return;
        BSTNode* curr = root;
        while (curr->right) curr = curr->right;
        cout << "Maximum Event ID (Audit BST): " << curr->eventID << endl;
    }
};

int main() {
    TrafficSystem city;
    int n, id, p;

    cout << "Enter number of events to input: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEvent " << i + 1 << endl;
        cout << "Enter Event ID: ";
        cin >> id;
        cout << "Enter Priority Level: ";
        cin >> p;
        city.enqueue(id, p);
    }

    city.processAndAudit();
    cout << "\n--- Audit Results ---" << endl;
    city.findMin();
    city.findMax();

    return 0;
}
