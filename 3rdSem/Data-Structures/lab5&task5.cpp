// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14,};
//     int n = 7;
//     int key, low = 0, high = n - 1, mid;
//     cout << "Enter the element to be searched: ";
//     cin >> key;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == key)
//         {
//             cout << "Element found at index " << mid << endl;
//             return 0;
//         }
//         else if (key < arr[mid])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     cout << "Element not found in the array" << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {3, 1, 5, 4, 2};
//     int n = 5;
//     for(int i = 0; i < n - 1; i++)
//     {
//         for(int j = 0; j < n - i - 1; j++)
//         {
//             if(arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     cout << "Sorted array: ";
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 10;
//     int b = 8;
//     cout << "Enter two numbers for a & b: ";
//     cin >> a >> b;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     int temp;
//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     cout << "After swapping: a = " << a << " & b = " << b << endl;
// }




// #include <iostream>
// using namespace std;
// int main()
// {
//     int r1, c1, r2, c2;
//     cout << "Enter rows and columns for first matrix: ";
//     cin >> r1 >> c1;
//     cout << "Enter rows and columns for second matrix: ";
//     cin >> r2 >> c2;
//     if (c1 != r2)
//     {
//         cout << "Matrix multiplication not possible!" << endl;
//         return 0;
//     }
//     int A[10][10], B[10][10], C[10][10] = {0};
//     cout << "Enter elements of first matrix:" << endl;
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c1; j++)
//         {
//             cin >> A[i][j];
//         }
//     }
//     cout << "Enter elements of second matrix:" << endl;
//     for (int i = 0; i < r2; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cin >> B[i][j];
//         }
//     }
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             for (int k = 0; k < c1; k++)
//             {
//                 C[i][j] += A[i][k] * B[k][j];
//             }
//         }
//     }
//     cout << "Resultant matrix after multiplication:" << endl;
//     for (int i = 0; i < r1; i++)
//     {
//         for (int j = 0; j < c2; j++)
//         {
//             cout << C[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// struct Employee
// {
//     char name[50];
//     float salary;
// };
// int main()
// {
//     Employee emp[3] = {{"Alice", 50000}, {"Bob", 60000}, {"Charlie", 55000}};
//     for (int i = 0; i < 3; i++)
//     {
//         if(strcmp(emp[i].name, "Bob") == 0)
//         {
//             cout << "Found: " << emp[i].name << " with salary " << emp[i].salary << endl;
//         }
//     }
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = i + 1; j < 3; j++)
//         {
//             if(emp[j].salary > emp[j].salary)
//             {
//                 swap(empji], emp[j+1]);
//             }
//         }
//     }
//     cout << "Employees sorted by salary: " << endl;
//     for(int i = 0; i < 3; i++)
//     {
//         cout << emp[i].name << ": " << emp[i].salary << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// struct Student
// {
//     char name[50];
//     int age;
// };
// struct Rollno
// {
//     int dept;
//     int session;
//     int regno;
//     string degree;
// };




// #include <iostream>
// using namespace std;
// int main() {
// float value = 12.5;
// void *ptr = &value;
// cout << "Address of float variable: " << &value << endl;
// cout << "Address stored in void pointer: " << ptr << endl;
// cout << "Value using typecasting: " << *(float*)ptr << endl;
// return 0;
// }




// #include <iostream>
// #include <cstring>
// using namespace std;
// struct Employee {
// char name[20];
// float salary;
// };
// int main() {
// Employee emp[3] = { {"Ali", 50000}, {"Sara", 60000}, {"Omar",
// 45000} };
// // Linear Search
// for (int i = 0; i < 3; i++) {
// if (strcmp(emp[i].name, "Ali") == 0)
// cout << "Found " << emp[i].name << " with salary " <<
// emp[i].salary << endl;
// }
// // Bubble Sort by salary (descending)
// for (int i = 0; i < 3; i++) {
// for (int j = 0; j < 2; j++) {
// if (emp[j].salary < emp[j + 1].salary)
// swap(emp[j], emp[j + 1]);
// }
// }
// cout << "\nEmployees sorted by salary:\n";
// for (int i = 0; i < 3; i++)
// cout << emp[i].name << " - " << emp[i].salary << endl;
// return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;

//     int *arr = new int[size];

//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; i++)
//         cin >> *(arr + i);

//     cout << "Array elements are: ";
//     for (int i = 0; i < size; i++)
//         cout << *(arr + i) << " ";

//     delete[] arr;
//     return 0;
// }








// #include <iostream>
// using namespace std;
// struct Roll {
//     char dep[10];
//     int session;
//     int regNo;
//     char degree[10];
// };
// struct Student {
//     char name[20];
//     int age;
//     struct Roll rn;
// };
// int main() {
//     Student s1;  
//     cout << "Enter name: ";
//     cin >> s1.name;
//     cout << "Enter age: ";
//     cin >> s1.age;
//     cout << "Enter department: ";
//     cin >> s1.rn.dep;
//     cout << "Enter session: ";
//     cin >> s1.rn.session;
//     cout << "Enter registration number: ";
//     cin >> s1.rn.regNo;
//     cout << "Enter degree: ";
//     cin >> s1.rn.degree;
//     cout << "\n----- Student Record ------\n";
//     cout << "Name: " << s1.name << endl;
//     cout << "Age: " << s1.age << endl;
//     cout << "Department: " << s1.rn.dep << endl;
//     cout << "Session: " << s1.rn.session << endl;
//     cout << "Registration No: " << s1.rn.regNo << endl;
//     cout << "Degree: " << s1.rn.degree << endl;
//     return 0;
// }







// #include <iostream>
// #include <cstring>
// using namespace std;
// struct Employee {
//     char name[20];
//     int empID;
//     float salary;
// };
// int main() {
//     Employee emp[3];
//     cout << "Enter data for 3 employees:\n";
//     for (int i = 0; i < 3; i++) {
//         cout << "Name: ";
//         cin >> emp[i].name;
//         cout << "Emp ID: ";
//         cin >> emp[i].empID;
//         cout << "Salary: ";
//         cin >> emp[i].salary;
//     }
//     for (int i = 0; i < 3 - 1; i++) {
//         for (int j = 0; j < 3 - i - 1; j++) {
//             if (emp[j].salary < emp[j + 1].salary) {
//                 Employee temp = emp[j];
//                 emp[j] = emp[j + 1];
//                 emp[j + 1] = temp;
//             }
//         }
//     }
//     cout << "Employees sorted by salary:\n";
//     for (int i = 0; i < 3; i++) {
//         cout << emp[i].name << " (ID: " << emp[i].empID << ") Salary: " << emp[i].salary << endl;
//     }
//     char searchName[20];
//     cout << "Enter name to search: ";
//     cin >> searchName;
//     bool found = false;
//     for (int i = 0; i < 3; i++) {
//         if (strcmp(emp[i].name, searchName) == 0) {
//             cout << "Record found:\n";
//             cout << "Name: " << emp[i].name << "\nID: " << emp[i].empID << "\nSalary: " << emp[i].salary << endl;
//             found = true;
//             break;
//         }
//     }
//     if (!found) {
//         cout << "Employee not found." << endl;
//     }
//     return 0;
// }













// Lab Task
// Task 7: Mini Student Record System (Final Lab Task)
// Objective: Integrate all concepts.
// Assignment:
// • Create an array of 5 students using nested structures.
// • Each student has: name, age, roll (with department, session, registration, degree), and 3
// subject marks.
// • Compute average GPA for each student.
// • Sort students by GPA (highest first).
// • Search a student by registration number and display full record.









// #include <iostream>
// using namespace std;
// struct Roll {
//     char department[20];
//     int session;
//     int registration;
//     char degree[10];
// };
// struct Student {
//     char name[50];
//     int age;
//     Roll roll;
//     float marks[3];
//     float gpa;
// };
// int main() {
//     const int NUM_STUDENTS = 5;
//     Student students[NUM_STUDENTS]; 
//     cout << "--- Enter Data for " << NUM_STUDENTS << " Students ---" << endl;
//     for (int i = 0; i < NUM_STUDENTS; i++) {
//         cout << "\n--- Student " << i + 1 << " ---" << endl;
//         cout << "Name: ";
//         cin >> students[i].name;
//         cout << "Age: ";
//         cin >> students[i].age;
//         cout << "Department: ";
//         cin >> students[i].roll.department;
//         cout << "Session (e.g., 2025): ";
//         cin >> students[i].roll.session;
//         cout << "Registration No: ";
//         cin >> students[i].roll.registration;
//         cout << "Degree (e.g., BS): ";
//         cin >> students[i].roll.degree;
//         cout << "Enter 3 subject marks (separated by space): ";
//         cin >> students[i].marks[0] >> students[i].marks[1] >> students[i].marks[2];
//         students[i].gpa = (students[i].marks[0] + students[i].marks[1] + students[i].marks[2]) / 3.0f;
//     }
//     for (int i = 0; i < NUM_STUDENTS - 1; i++) {
//         for (int j = 0; j < NUM_STUDENTS - i - 1; j++) {
//             if (students[j].gpa < students[j + 1].gpa) {
//                 Student temp = students[j];
//                 students[j] = students[j + 1];
//                 students[j + 1] = temp;
//             }
//         }
//     }
//     cout << "\n--- Students Sorted by GPA (Highest First) ---" << endl;
//     for (int i = 0; i < NUM_STUDENTS; i++) {
//         cout << "Rank " << i + 1 << ": " << students[i].name
//              << "\t(Reg No: " << students[i].roll.registration
//              << ", GPA: " << students[i].gpa << ")" << endl;
//     }
//     int searchReg;
//     cout << "\n--- Search Student by Registration Number ---" << endl;
//     cout << "Enter Registration Number to search: ";
//     cin >> searchReg;
//     bool found = false;
//     for (int i = 0; i < NUM_STUDENTS; i++) {
//         if (students[i].roll.registration == searchReg) {
//             cout << "\n--- Record Found ---" << endl;
//             cout << "Name: " << students[i].name << endl;
//             cout << "Age: " << students[i].age << endl;
//             cout << "Department: " << students[i].roll.department << endl;
//             cout << "Session: " << students[i].roll.session << endl;
//             cout << "Registration No: " << students[i].roll.registration << endl;
//             cout << "Degree: " << students[i].roll.degree << endl;
//             cout << "Marks: " << students[i].marks[0] << ", "
//                  << students[i].marks[1] << ", " << students[i].marks[2] << endl;
//             cout << "GPA: " << students[i].gpa << endl;
//             found = true;
//             break; 
//         }
//     }
//     if (!found) {
//         cout << "Student with Registration No " << searchReg << " not found." << endl;
//     }
//     return 0;
// }