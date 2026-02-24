// #include <iostream>
// using namespace std;
// const int MAX = 5; // Maximum size of stack
// int stack[MAX]; // Stack array
// int top = -1; // Top pointer (stack is empty)
// void push(int value) {
// if (top == MAX - 1)

// cout << "Stack Overflow" << endl;
// else {
// top++;
// stack[top] = value;
// cout << value << " pushed into stack" << endl;
// }
// }
// void pop() {
// if (top == -1)
// cout << "Stack Underflow" << endl;
// else {
// cout << stack[top] << " popped from stack" << endl;
// top--;
// }
// }
// bool isEmpty() {
// return (top == -1);
// }
// int getTop() {
// if (top == -1)
// return -1;
// else
// return stack[top];
// }
// int count() {
// return top + 1;
// }
// int main() {
// push(10);
// push(20);
// push(30);
// cout << "Top element: " << getTop() << endl;
// cout << "Total elements: " << count() << endl;

// pop();
// pop();
// if (isEmpty())
// cout << "Stack is empty" << endl;
// else
// cout << "Stack is not empty" << endl;
// return 0;
// }




// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> s; 

//     s.push(10);
//     s.push(20);
//     s.push(30);

    
//     cout << "Top element: " << s.top() << endl;
//     cout << "Total elements: " << s.size() << endl;

//     s.pop();
//     cout << "Top element after one pop: " << s.top() << endl;

//     if (s.empty())
//         cout << "Stack is empty" << endl;
//     else
//         cout << "Stack is not empty" << endl;

//     return 0;
// }





// #include <iostream>
// using namespace std;

// struct Node    {
//     int data;
//     Node* next;
//     };

// Node* top = NULL;

// void push(int value)
// {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = top;
//     top = newNode;
//     cout << value << " pushed into stack" << endl;
// }

// void pop() {
//     if (top == NULL)
//     cout << "Stack Underflow" << endl;
// else 
//     {
//     Node* temp = top;
//     cout << temp->data << " popped from stack" << endl;
//     top = top->next;
//     delete temp;
//     }
// }

// void displayTop() {
//     if (top == NULL)
//     cout << "Stack is empty" << endl;
//     else
//     cout << "Top element: " << top->data << endl;
// }

// int main() {
// push(100);
// push(200);
// push(300);
// displayTop();
// pop();
// pop();
// displayTop();
// return 0;
// }



// Lab Tasks
// Instructions:
// • Solve the following problems using C++.
// • Think carefully about how the data should be stored and managed.
// • You may implement any necessary functions to complete the tasks.

// Q1: Browser History Simulation
// A browser keeps track of pages visited. The user can go “Back” to the previous page.
// • Simulate storing the last 5 pages visited.
// • Go back 2 pages.
// • Display the current page.
// • Display the total number of pages remaining in history.

// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<string> browserHistory;
    
//     browserHistory.push("page1.com");
//     browserHistory.push("page2.com");
//     browserHistory.push("page3.com");
//     browserHistory.push("page4.com");
//     browserHistory.push("page5.com");

//     if (!browserHistory.empty()) browserHistory.pop();
//     if (!browserHistory.empty()) browserHistory.pop();

//     if (!browserHistory.empty())
//         cout << "Current page: " << browserHistory.top() << endl;
//     else
//         cout << "No pages in history" << endl;

//     cout << "Total pages in history: " << browserHistory.size() << endl;

//     return 0;
// }


// Q2: Stack Using Array
// • Implement a stack of integers using an array.
// • Perform 3 push operations, 2 pop operations.
// • Display the top element and total elements in the stack.

// #include <iostream>
// using namespace std;
// const int MAX = 5; // Maximum size of stack
// int stack[MAX]; // Stack array
// int top = -1; // Top pointer (stack is empty)
// void push(int value) {
//     if (top == MAX - 1)
//         cout << "Stack Overflow" << endl;
//     else {
//         top++;
//         stack[top] = value;
//         cout << value << " pushed into stack" << endl;
//     }
// }
// void pop() {
//     if (top == -1)
//         cout << "Stack Underflow" << endl;
//     else {
//         cout << stack[top] << " popped from stack" << endl;
//         top--;
//     }
// }
// bool isEmpty() {
//     return (top == -1);
// }
// int getTop() {
//     if (top == -1)
//         return -1;
//     else
//         return stack[top];
// }
// int count() {
//     return top + 1;
// }
// int main() {
//     push(10);
//     push(20);
//     push(30);
//     pop();
//     pop();
//     cout << "Top element: " << getTop() << endl;    
//     cout << "Total elements: " << count() << endl;
//     return 0;
// }




// Q3 (Scenario – Linked List Stack)
// Scenario: Undo-Redo System in a Drawing App
// A drawing application keeps track of user actions (like drawing lines, shapes, or erasing) for
// Undo functionality.
// • Each action is stored as an integer ID.
// • The last action performed can be undone first (LIFO).
// Tasks:
// 1. Implement a stack using a linked list to store user actions.
// 2. Perform the following sequence:
// o Push 5 actions (IDs: 101, 102, 103, 104, 105).
// o Undo 3 actions (pop operations).
// o Display the most recent action still active.
// o Check if the stack is empty after the undo operations.
// 3. Add an extra check: If the stack becomes empty and the user tries to undo another action,
// display a “No actions to undo” message.
// END

// Q3 (Scenario – Linked List Stack)

// #include <iostream>
// using namespace std;
// struct Node {
//     int actionID;
//     Node* next;
// };
// Node* top = NULL;
// void push(int actionID) {
//     Node* newNode = new Node();
//     newNode->actionID = actionID;
//     newNode->next = top;
//     top = newNode;
//     cout << "Action " << actionID << " performed and added to stack" << endl;
// }
// void pop() {
//     if (top == NULL) {
//         cout << "No actions to undo" << endl;
//     } else {
//         Node* temp = top;
//         cout << "Action " << temp->actionID << " undone" << endl;
//         top = top->next;
//         delete temp;
//     }
// }
// void displayTop() {
//     if (top == NULL) {
//         cout << "No active actions" << endl;
//     } else {
//         cout << "Most recent active action ID: " << top->actionID << endl;
//     }
// }
// bool isEmpty() {
//     return (top == NULL);
// }
// int main() {
//     push(101);
//     push(102);
//     push(103);
//     push(104);
//     push(105);
//     pop();
//     pop();
//     pop();
//     displayTop();
//     if (isEmpty()) {
//         cout << "No actions remaining in stack" << endl;
//     } else {
//         cout << "There are still actions in the stack" << endl;
//     }
//     pop();
//     pop();
//     pop(); // This will display "No actions to undo"
//     return 0;
// }
 