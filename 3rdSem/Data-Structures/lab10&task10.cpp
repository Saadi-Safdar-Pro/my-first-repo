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

// void getFront() {
// if (front == -1 || front > rear)
// cout << "Queue Empty\n";
// else

// cout << "Front: " << queue[front] << endl;
// }

// void countElements() {
// if (front == -1)
// cout << "Count: 0\n";
// else
// cout << "Count: " << (rear - front + 1) << endl;
// }

// int main() {
// enqueue(10);
// enqueue(20);
// enqueue(30);
// getFront();
// countElements();
// dequeue();
// countElements();
// return 0;
// }





// #include <iostream>
// using namespace std;

// struct node {
// int info;
// node* link;
// };

// class queue_list {
// node *front, *rear;

// public:
// queue_list() {
// front = rear = NULL;
// }

// void insert(int item);
// void del();
// void display();
// };

// void queue_list::insert(int item) {
// node *tmp = new node;
// tmp->info = item;
// tmp->link = NULL;
// if (front == NULL)
// front = rear = tmp;
// else {
// rear->link = tmp;
// rear = tmp;
// }
// }

// void queue_list::del() {
// if (front == NULL) {
// cout << "Queue Underflow\n";
// return;
// }
// node *tmp = front;
// cout << "Deleted: " << tmp->info << endl;
// front = front->link;
// delete tmp;
// }

// void queue_list::display() {
// node *ptr = front;
// if (front == NULL) {
// cout << "Queue Empty\n";
// return;

// }
// cout << "Queue Elements: ";
// while (ptr != NULL) {
// cout << ptr->info << " ";
// ptr = ptr->link;
// }
// cout << endl;
// }

// int main() {
// queue_list q;
// q.insert(5);
// q.insert(15);
// q.insert(25);
// q.display();
// q.del();
// q.display();
// return 0;
// }





// #include <iostream>
// using namespace std;
// #define SIZE 5
// int cqueue[SIZE];
// int front = -1, rear = -1;

// void insertCQ(int val) {
// if ((rear + 1) % SIZE == front) {
// cout << "Queue Full\n";
// return;
// }
// if (front == -1) front = 0;
// rear = (rear + 1) % SIZE;
// cqueue[rear] = val;
// }

// void deleteCQ() {
// if (front == -1) {
// cout << "Queue Empty\n";
// return;
// }
// cout << "Deleted: " << cqueue[front] << endl;
// if (front == rear)
// front = rear = -1;
// else
// front = (front + 1) % SIZE;

// }

// void displayCQ() {
// if (front == -1) {
// cout << "Queue Empty\n";
// return;
// }
// int i = front;
// while (i != rear) {
// cout << cqueue[i] << " ";
// i = (i + 1) % SIZE;
// }
// cout << cqueue[i] << endl;
// }

// int main() {
// insertCQ(10);
// insertCQ(20);
// insertCQ(30);
// displayCQ();
// deleteCQ();
// displayCQ();
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





// Lab Task:
// Scenario University Admission Processing System
// Background
// During university admission days, a large number of students visit the admission office to submit
// documents and get verification done. Since only one student can be processed at a time, students
// must be handled in the exact order in which they arrive.
// To ensure fairness and proper management, the admission office follows a First Come First
// Serve (FCFS) policy.
// Problem Statement
// Design a system that manages students waiting for admission processing such that:
// • Students are served in the order they arrive.
// • The first student in the line is processed first.
// • The system can display the current student being served.
// • The total number of waiting students can be tracked efficiently.
// Why Queue is Used
// Queue follows FIFO, which perfectly matches the admission process:
// • First student entering the queue → First student processed.
// Functional Requirements
// 1. Add a new student to the waiting list.
// 2. Remove a student once admission processing is completed.
// 3. Display the student currently being served.
// 4. Display total number of students waiting.
// Queue Operations Mapping
// Admission Requirement Queue Operation
// Student arrives Enqueue
// Student processed Dequeue
// Current student Front
// Waiting students Count
// Efficient space usage Circular Queue
// Queue Implementations Used
// • Array Queue → Limited daily admissions
// • Linked List Queue → Unlimited students
// • Circular Queue → Efficient memory usage
// • Circular Queue with Count → Track waiting students





// // admission_array_queue.cpp
// #include <iostream>
// using namespace std;

// #define SIZE 5
// string queueArr[SIZE];
// int frontArr = -1, rearArr = -1;

// void enqueueArr(string name) {
//     if (rearArr == SIZE - 1) {
//         cout << "Queue Overflow (daily limit reached)\n";
//         return;
//     }
//     if (frontArr == -1) frontArr = 0;
//     queueArr[++rearArr] = name;
//     cout << "Student added: " << name << endl;
// }

// void dequeueArr() {
//     if (frontArr == -1 || frontArr > rearArr) {
//         cout << "Queue Underflow (no student to process)\n";
//         return;
//     }
//     cout << "Student processed: " << queueArr[frontArr++] << endl;
// }

// void currentStudentArr() {
//     if (frontArr == -1 || frontArr > rearArr)
//         cout << "No current student\n";
//     else
//         cout << "Current student: " << queueArr[frontArr] << endl;
// }

// void countArr() {
//     if (frontArr == -1 || frontArr > rearArr)
//         cout << "Total waiting students: 0\n";
//     else
//         cout << "Total waiting students: " << (rearArr - frontArr + 1) << endl;
// }

// void displayArr() {
//     if (frontArr == -1 || frontArr > rearArr) {
//         cout << "Queue Empty\n";
//         return;
//     }
//     cout << "Waiting students: ";
//     for (int i = frontArr; i <= rearArr; i++) {
//         cout << queueArr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int choice;
//     string name;

//     do {
//         cout << "\n--- Admission System (Array Queue) ---\n";
//         cout << "1. Add new student\n";
//         cout << "2. Process student\n";
//         cout << "3. Show current student\n";
//         cout << "4. Show total waiting students\n";
//         cout << "5. Show all waiting students\n";
//         cout << "6. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter student name: ";
//             cin >> name;
//             enqueueArr(name);
//             break;
//         case 2:
//             dequeueArr();
//             break;
//         case 3:
//             currentStudentArr();
//             break;
//         case 4:
//             countArr();
//             break;
//         case 5:
//             displayArr();
//             break;
//         case 6:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice\n";
//         }
//     } while (choice != 6);

//     return 0;
// }






// // admission_linked_queue.cpp
// #include <iostream>
// using namespace std;

// struct node {
//     string name;
//     node* link;
// };

// class queue_list {
//     node *front, *rear;
// public:
//     queue_list() {
//         front = rear = NULL;
//     }

//     void enqueue(string student) {
//         node *tmp = new node;
//         tmp->name = student;
//         tmp->link = NULL;

//         if (front == NULL)
//             front = rear = tmp;
//         else {
//             rear->link = tmp;
//             rear = tmp;
//         }
//         cout << "Student added: " << student << endl;
//     }

//     void dequeue() {
//         if (front == NULL) {
//             cout << "Queue Underflow (no student to process)\n";
//             return;
//         }
//         node *tmp = front;
//         cout << "Student processed: " << tmp->name << endl;
//         front = front->link;
//         delete tmp;
//         if (front == NULL) rear = NULL;
//     }

//     void currentStudent() {
//         if (front == NULL)
//             cout << "No current student\n";
//         else
//             cout << "Current student: " << front->name << endl;
//     }

//     void countWaiting() {
//         int cnt = 0;
//         node *ptr = front;
//         while (ptr != NULL) {
//             cnt++;
//             ptr = ptr->link;
//         }
//         cout << "Total waiting students: " << cnt << endl;
//     }

//     void displayAll() {
//         if (front == NULL) {
//             cout << "Queue Empty\n";
//             return;
//         }
//         cout << "Waiting students: ";
//         node *ptr = front;
//         while (ptr != NULL) {
//             cout << ptr->name << " ";
//             ptr = ptr->link;
//         }
//         cout << endl;
//     }
// };

// int main() {
//     queue_list q;
//     int choice;
//     string name;

//     do {
//         cout << "\n--- Admission System (Linked List Queue) ---\n";
//         cout << "1. Add new student\n";
//         cout << "2. Process student\n";
//         cout << "3. Show current student\n";
//         cout << "4. Show total waiting students\n";
//         cout << "5. Show all waiting students\n";
//         cout << "6. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter student name: ";
//             cin >> name;
//             q.enqueue(name);
//             break;
//         case 2:
//             q.dequeue();
//             break;
//         case 3:
//             q.currentStudent();
//             break;
//         case 4:
//             q.countWaiting();
//             break;
//         case 5:
//             q.displayAll();
//             break;
//         case 6:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice\n";
//         }
//     } while (choice != 6);

//     return 0;
// }





// // admission_circular_queue.cpp
// #include <iostream>
// using namespace std;

// #define SIZE 5
// string cqueue[SIZE];
// int frontCQ = -1, rearCQ = -1;

// void enqueueCQ(string name) {
//     if ((rearCQ + 1) % SIZE == frontCQ) {
//         cout << "Queue Full\n";
//         return;
//     }
//     if (frontCQ == -1) frontCQ = 0;
//     rearCQ = (rearCQ + 1) % SIZE;
//     cqueue[rearCQ] = name;
//     cout << "Student added: " << name << endl;
// }

// void dequeueCQ() {
//     if (frontCQ == -1) {
//         cout << "Queue Empty\n";
//         return;
//     }
//     cout << "Student processed: " << cqueue[frontCQ] << endl;
//     if (frontCQ == rearCQ)
//         frontCQ = rearCQ = -1;
//     else
//         frontCQ = (frontCQ + 1) % SIZE;
// }

// void displayCQ() {
//     if (frontCQ == -1) {
//         cout << "Queue Empty\n";
//         return;
//     }
//     cout << "Waiting students: ";
//     int i = frontCQ;
//     while (i != rearCQ) {
//         cout << cqueue[i] << " ";
//         i = (i + 1) % SIZE;
//     }
//     cout << cqueue[i] << endl;
// }

// void currentStudentCQ() {
//     if (frontCQ == -1)
//         cout << "No current student\n";
//     else
//         cout << "Current student: " << cqueue[frontCQ] << endl;
// }

// int main() {
//     int choice;
//     string name;

//     do {
//         cout << "\n--- Admission System (Circular Queue) ---\n";
//         cout << "1. Add new student\n";
//         cout << "2. Process student\n";
//         cout << "3. Show current student\n";
//         cout << "4. Show all waiting students\n";
//         cout << "5. Exit\n";
//         cout << "Enter choice: ";
//         cin >> choice;

//         switch (choice) {
//         case 1:
//             cout << "Enter student name: ";
//             cin >> name;
//             enqueueCQ(name);
//             break;
//         case 2:
//             dequeueCQ();
//             break;
//         case 3:
//             currentStudentCQ();
//             break;
//         case 4:
//             displayCQ();
//             break;
//         case 5:
//             cout << "Exiting...\n";
//             break;
//         default:
//             cout << "Invalid choice\n";
//         }
//     } while (choice != 5);

//     return 0;
// }





// admission_circular_queue_count.cpp
#include <iostream>
using namespace std;

#define SIZE 5
string queueCQ[SIZE];
int frontC = 0, rearC = -1, countC = 0;

void enqueueC(string name) {
    if (countC == SIZE) {
        cout << "Queue Full\n";
        return;
    }
    rearC = (rearC + 1) % SIZE;
    queueCQ[rearC] = name;
    countC++;
    cout << "Student added: " << name << endl;
}

void dequeueC() {
    if (countC == 0) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Student processed: " << queueCQ[frontC] << endl;
    frontC = (frontC + 1) % SIZE;
    countC--;
}

void displayC() {
    if (countC == 0) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Waiting students: ";
    int i = frontC;
    for (int c = 0; c < countC; c++) {
        cout << queueCQ[i] << " ";
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

void currentStudentC() {
    if (countC == 0)
        cout << "No current student\n";
    else
        cout << "Current student: " << queueCQ[frontC] << endl;
}

void totalWaitingC() {
    cout << "Total waiting students: " << countC << endl;
}

int main() {
    int choice;
    string name;

    do {
        cout << "\n--- Admission System (Circular Queue with Count) ---\n";
        cout << "1. Add new student\n";
        cout << "2. Process student\n";
        cout << "3. Show current student\n";
        cout << "4. Show total waiting students\n";
        cout << "5. Show all waiting students\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter student name: ";
            cin >> name;
            enqueueC(name);
            break;
        case 2:
            dequeueC();
            break;
        case 3:
            currentStudentC();
            break;
        case 4:
            totalWaitingC();
            break;
        case 5:
            displayC();
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 6);

    return 0;
}
