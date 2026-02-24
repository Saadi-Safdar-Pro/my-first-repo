// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// void dfs(char node, map<char, vector<char>> graph, map<char, bool> visited) {
//     visited[node] = true;
//     cout << node;
//     for (char neighbor : graph[node]) {
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, visited);
//         }
//     }
// }

// int main() {
//     map<char, vector<char>> graph;
//     graph['A'] = {'B', 'C'};
//     graph['B'] = {'D'};
//     graph['C'] = {'E'};
//     graph['D'] = {};
//     graph['E'] = {};
    
//     map<char, bool> visited;
//     cout << "DFS Traversal: ";
//     dfs('A', graph, visited);
//     return 0;
// }




// #include <iostream>

// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {8, 3, 5, 2};
//     int n = 4;
//     insertionSort(arr, n);
//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i];
//     }
//     return 0;
// }






// #include <iostream>

// using namespace std;

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int arr[] = {10, 7, 8, 9, 1, 5};
//     int n = 6;
//     quickSort(arr, 0, n - 1);
//     cout << "Sorted Array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i];
//     }
//     return 0;
// }











// Task 1: DFS Traversal – Real Scenario
// A college campus has different departments connected by pathways.
// Represent the departments as vertices and pathways as edges using an adjacency list.
// Implement Depth First Search (DFS) to traverse all departments starting from the main gate.

// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// void dfs(char node, map<char, vector<char>>& graph, map<char, bool>& visited) {
//     visited[node] = true;
//     cout << node << " ";
//     for (char neighbor : graph[node]) {
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, visited);
//         }
//     }
// }

// int main() {
//     map<char, vector<char>> graph;
//     graph['M'] = {'C', 'L'};  // Main Gate -> Computer Lab, Library
//     graph['C'] = {'A', 'E'};  // Computer Lab -> Admin, Engineering
//     graph['L'] = {'S'};       // Library -> Science
//     graph['A'] = {};          // Admin
//     graph['E'] = {};          // Engineering
//     graph['S'] = {};          // Science
    
//     map<char, bool> visited;
//     cout << "Campus DFS from Main Gate: ";
//     dfs('M', graph, visited);
//     cout << endl;
//     return 0;
// }


// Task 2: DFS for Website Navigation
// A website consists of multiple web pages linked together.
// Write a C++ program using DFS to simulate visiting all web pages starting from the home page.
// Display the order in which pages are visited.

// #include <iostream>
// #include <vector>
// #include <map>

// using namespace std;

// void dfs(string node, map<string, vector<string>>& graph, map<string, bool>& visited) {
//     visited[node] = true;
//     cout << node << " ";
//     for (string neighbor : graph[node]) {
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, visited);
//         }
//     }
// }

// int main() {
//     map<string, vector<string>> graph;
//     graph["Home"] = {"About", "Products"};
//     graph["About"] = {"Contact", "Team"};
//     graph["Products"] = {"Pricing", "Support"};
//     graph["Contact"] = {};
//     graph["Team"] = {};
//     graph["Pricing"] = {};
//     graph["Support"] = {};
    
//     map<string, bool> visited;
//     cout << "Website visit order: ";
//     dfs("Home", graph, visited);
//     cout << endl;
//     return 0;
// }



// Task 3: Insertion Sort for Student Marks
// An array stores marks of students obtained in a class test.
// Implement Insertion Sort to arrange the marks in ascending order.
// Display the array after each pass of sorting.

// #include <iostream>

// using namespace std;

// void insertionSort(int arr[], int n) {
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
        
//         // Display after each pass
//         cout << "After pass " << i << ": ";
//         for (int k = 0; k < n; k++) {
//             cout << arr[k] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int marks[] = {85, 92, 78, 95, 88, 76};
//     int n = 6;
//     cout << "Student marks sorting:" << endl;
//     insertionSort(marks, n);
//     return 0;
// }




// Task 4: Quick Sort for Online Product Prices
// An online shopping platform stores product prices in an array.
// Use Quick Sort with the last element as pivot to sort the prices.
// Show the final sorted list of prices.


// #include <iostream>

// using namespace std;

// int partition(int arr[], int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// void quickSort(int arr[], int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }

// int main() {
//     int prices[] = {299, 1500, 799, 450, 1200, 99, 899};
//     int n = 7;
    
//     cout << "Original prices: ";
//     for (int i = 0; i < n; i++) cout << prices[i] << " ";
//     cout << endl;
    
//     quickSort(prices, 0, n - 1);
    
//     cout << "Sorted prices: ";
//     for (int i = 0; i < n; i++) cout << prices[i] << " ";
//     cout << endl;
//     return 0;
// }








