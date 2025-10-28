// #include <iostream>
// using namespace std;
// int main() {
//     int arr[10];
//     cout << "Enter 10 integers:\n";
//     for (int i = 0; i < 10; i++) {
//         cin >> arr[i];
//     }
//     cout << "All numbers entered are: ";
//     for (int i = 0; i < 10; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << "\nEven numbers are: ";
//     for (int i = 0; i < 10; i++) {
//         if (arr[i] % 2 == 0) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int matrix[3][3];
//     cout << "Enter elements of 3x3 matrix:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> matrix[i][j];
//         }
//     }
//     cout << "Matrix is:\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << matrix[i][j] << "\t";
//         }
//         cout << endl;
//     }
//     cout << "Sum of each row:\n";
//     for (int i = 0; i < 3; i++) {
//         int row_sum = 0;
//         for (int j = 0; j < 3; j++) {
//             row_sum += matrix[i][j];
//         }
//         cout << "Row " << i + 1 << ": " << row_sum << endl;
//     }
//     cout << "Sum of each column:\n";
//     for (int j = 0; j < 3; j++) {
//         int col_sum = 0;
//         for (int i = 0; i < 3; i++) {
//             col_sum += matrix[i][j];
//         }
//         cout << "Column " << j + 1 << ": " << col_sum << endl;
//     }
//     cout << "Main diagonal elements: ";
//     for (int i = 0; i < 3; i++) {
//         cout << matrix[i][i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter a number to print its multiplication table: ";
//     cin >> num;
//     cout << "Using for loop:\n";
//     for (int i = 1; i <= 10; i++) {
//         cout << num << " x " << i << " = " << num * i << endl;
//     }
//     cout << "Using while loop:\n";
//     int i = 1;
//     while (i <= 10) {
//         cout << num << " x " << i << " = " << num * i << endl;
//         i++;
//     }
//     cout << "Using do-while loop:\n";
//     i = 1;
//     do {
//         cout << num << " x " << i << " = " << num * i << endl;
//         i++;
//     } while (i <= 10);

//     return 0;
// }

// #include <iostream>
// using namespace std;
// void takeInput(int arr[], int size) {
//     cout << "Enter " << size << " integers:\n";
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
// }
// void classifyNumbers(int arr[], int size, int &even, int &odd, int &zero) {
//     even = 0;
//     odd = 0;
//     zero = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == 0)
//             zero++;
//         else if (arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }
// }
// void displayResults(int even, int odd, int zero) {
//     cout << "Even numbers: " << even << endl;
//     cout << "Odd numbers: " << odd << endl;
//     cout << "Zeroes: " << zero << endl;
// }
// int main() {
//     int arr[10];
//     int even, odd, zero;
//     takeInput(arr, 10);
//     classifyNumbers(arr, 10, even, odd, zero);
//     displayResults(even, odd, zero);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " integers:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Reversed array: ";
//     for (int i = n - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[5];
//     cout << "Enter 5 integers:\n";
//     for (int i = 0; i < 5; i++) {
//         cin >> arr[i];
//     }
//     cout << "Numbers entered: ";
//     for (int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int max_num = arr[0], min_num = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > max_num)
//             max_num = arr[i];
//         if (arr[i] < min_num)
//             min_num = arr[i];
//     }
//     cout << "Maximum number: " << max_num << endl;
//     cout << "Minimum number: " << min_num << endl;
//     cout << "Difference (max - min): " << (max_num - min_num) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements for array: ";
    cin >> n;
    int arr[n];
    cout << "Total size of array in bytes: " << sizeof(arr) << endl;
    int elems_fit_100_bytes = 100 / sizeof(int);
    cout << elems_fit_100_bytes << " elements of type int can fit in 100 bytes." << endl;
    return 0;
}
