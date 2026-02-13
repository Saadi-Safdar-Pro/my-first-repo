#include <iostream>
using namespace std;

struct BSTNode {
    int eventID;
    BSTNode *left, *right;
};

struct PQNode {
    int id;
    int priority;
    PQNode* next;
};

BSTNode* createBSTNode(int id) {
    BSTNode* newNode = new BSTNode();
    newNode->eventID = id;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BSTNode* insertBST(BSTNode* root, int id) {
    if (root == NULL) return createBSTNode(id);
    if (id < root->eventID)
        root->left = insertBST(root->left, id);
    else
        root->right = insertBST(root->right, id);
    return root;
}

class TrafficManager {
    PQNode* front;
    BSTNode* root;

public:
    TrafficManager() {
        front = NULL;
        root = NULL;
    }

    void enqueue(int id, int p) {
        PQNode* newNode = new PQNode;
        newNode->id = id;
        newNode->priority = p;

        if (front == NULL || p < front->priority) {
            newNode->next = front;
            front = newNode;
        } else {
            PQNode* q = front;
            while (q->next != NULL && q->next->priority <= p) {
                q = q->next;
            }
            newNode->next = q->next;
            q->next = newNode;
        }
    }

    void processEvents() {
        while (front != NULL) {
            PQNode* temp = front;
            cout << "Processing Event ID: " << temp->id << " (Priority: " << temp->priority << ")\n";
            root = insertBST(root, temp->id);
            front = front->next;
            delete temp;
        }
    }

    void findMin() {
        if (root == NULL) return;
        BSTNode* curr = root;
        while (curr->left != NULL) curr = curr->left;
        cout << "Minimum Event ID: " << curr->eventID << endl;
    }

    void findMax() {
        if (root == NULL) return;
        BSTNode* curr = root;
        while (curr->right != NULL) curr = curr->right;
        cout << "Maximum Event ID: " << curr->eventID << endl;
    }
};

int main() {
    TrafficManager system;

    system.enqueue(101, 1);
    system.enqueue(505, 1);
    system.enqueue(210, 2);
    system.enqueue(155, 2);
    system.enqueue(340, 3);
    system.enqueue(480, 4);
    system.enqueue(275, 4);
    system.enqueue(99, 5);

    system.processEvents();
    system.findMin();
    system.findMax();

    return 0;
}
