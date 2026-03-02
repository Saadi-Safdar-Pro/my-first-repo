#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    Node* createNode(string name) {
        Node* temp = new Node;
        temp->name = name;
        temp->next = NULL;
        return temp;
    }

    void insertBegin(string name) {
        Node* temp = createNode(name);
        temp->next = head;
        head = temp;
        cout << "Inserted at beginning.\n";
    }

    void insertLast(string name) {
        Node* temp = createNode(name);
        if (head == NULL) {
            head = temp;
            cout << "Inserted at end.\n";
            return;
        }
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
        cout << "Inserted at end.\n";
    }

    void insertPos(string name, int pos) {
        if (pos < 1) {
            cout << "Invalid position.\n";
            return;
        }
        Node* temp = createNode(name);

        if (pos == 1) {
            temp->next = head;
            head = temp;
            cout << "Inserted at position 1\n";
            return;
        }

        Node* current = head;
        for (int i = 1; i < pos - 1; i++) {
            if (current == NULL) {
                cout << "Position out of range.\n";
                return;
            }
            current = current->next;
        }

        if (current == NULL) {
            cout << "Position out of range.\n";
            return;
        }

        temp->next = current->next;
        current->next = temp;
        cout << "Inserted at position " << pos << endl;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* current = head;
        cout << "Names in Linked List: ";
        while (current != NULL) {
            cout << current->name << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    int choice, pos;
    string name;

    do {
        cout << "\n1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                list.insertBegin(name);
                break;

            case 2:
                cout << "Enter name: ";
                cin >> name;
                list.insertLast(name);
                break;

            case 3:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter position: ";
                cin >> pos;
                list.insertPos(name, pos);
                break;

            case 4:
                list.display();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
