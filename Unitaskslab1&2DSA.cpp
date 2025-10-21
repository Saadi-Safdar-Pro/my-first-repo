// #include <iostream>
// using namespace std;

// int main() {
//     cout << "Name: Saadi Safdar" << endl;
//     cout << "Registration: UW-24-CS-BS-088" << endl;
//     cout << "Semester: 3rd" << endl;
//     cout << "Joined: 2024" << endl;
    
//     int years = 2025 - 2024;
//     cout << "Years studied: " << years << endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
    
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
    
//     cout << "Sum: " << a + b << endl;
//     cout << "Difference: " << a - b << endl;
//     cout << "Product: " << a * b << endl;
//     cout << "Quotient: " << a / b << endl;
//     cout << "Remainder: " << a % b << endl;
    
//     if(a > b) {
//         cout << a << " is greater" << endl;
//     } else {
//         cout << b << " is greater" << endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float width, height;
    
//     cout << "Enter width and height: ";
//     cin >> width >> height;
    
//     float area = width * height;
//     float perimeter = 2 * (width + height);
    
//     cout << "Area: " << area << endl;
//     cout << "Perimeter: " << perimeter << endl;
    
//     if(width == height) {
//         cout << "It is a square" << endl;
//     } else {
//         cout << "It is a rectangle" << endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float n1, n2, n3;
    
//     cout << "Enter three numbers: ";
//     cin >> n1 >> n2 >> n3;
    
//     float avg = (n1 + n2 + n3) / 3;
//     cout << "Average: " << avg << endl;
    
//     if(avg >= 50) {
//         cout << "Pass" << endl;
//     } else {
//         cout << "Fail" << endl;
//     }
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     float s1, s2, s3;
    
//     cout << "Enter marks of 3 subjects: ";
//     cin >> s1 >> s2 >> s3;
    
//     float total = s1 + s2 + s3;
//     float average = total / 3;
//     float percentage = (total / 300) * 100;
    
//     cout << "Total: " << total << endl;
//     cout << "Average: " << average << endl;
//     cout << "Percentage: " << percentage << "%" << endl;
    
//     if(percentage >= 80) {
//         cout << "Grade: A" << endl;
//     } else if(percentage >= 70) {
//         cout << "Grade: B" << endl;
//     } else if(percentage >= 60) {
//         cout << "Grade: C" << endl;
//     } else if(percentage >= 50) {
//         cout << "Grade: D" << endl;
//     } else {
//         cout << "Grade: Fail" << endl;
//     }
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     char again;
    
//     do {
//         float a, b;
//         char op;
        
//         cout << "Enter first number: ";
//         cin >> a;
//         cout << "Enter operator (+, -, *, /): ";
//         cin >> op;
//         cout << "Enter second number: ";
//         cin >> b;
        
//         switch(op) {
//             case '+': cout << "Result: " << a + b << endl; break;
//             case '-': cout << "Result: " << a - b << endl; break;
//             case '*': cout << "Result: " << a * b << endl; break;
//             case '/': cout << "Result: " << a / b << endl; break;
//             default: cout << "Invalid operator!" << endl;
//         }
        
//         cout << "Calculate again? (y/n): ";
//         cin >> again;
        
//     } while(again == 'y' || again == 'Y');
    
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
    
//     cout << "Enter array size: ";
//     cin >> n;
    
//     int arr[n];
//     int sum = 0;
    
//     cout << "Enter " << n << " numbers: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     cout << "Squares: ";
//     for(int i = 0; i < n; i++) {
//         int square = arr[i] * arr[i];
//         cout << square << " ";
//         sum += square;
//     }
    
//     cout << endl << "Sum of squares: " << sum << endl;
    
//     return 0;
// }


// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// int main() {
//     srand(time(0));
    
//     cout << "10 random numbers between 1 and 100:" << endl;
//     for(int i = 0; i < 10; i++) {
//         int num = rand() % 100 + 1;
//         cout << num << " ";
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     float marks;
// };

// int main() {
//     Student s[3];
    
//     for(int i = 0; i < 3; i++) {
//         cout << "Enter details for student " << i+1 << ":" << endl;
//         cout << "Name: ";
//         cin >> s[i].name;
//         cout << "Roll No: ";
//         cin >> s[i].rollNo;
//         cout << "Marks: ";
//         cin >> s[i].marks;
//         cout << endl;
//     }
    
//     cout << "Student Records:" << endl;
//     for(int i = 0; i < 3; i++) {
//         cout << "Name: " << s[i].name << ", Roll No: " << s[i].rollNo 
//              << ", Marks: " << s[i].marks << endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double num;
    
//     cout << "Enter a number: ";
//     cin >> num;
    
//     cout << "Square root: " << sqrt(num) << endl;
//     cout << "Square: " << pow(num, 2) << endl;
//     cout << "Absolute value: " << abs(num) << endl;
//     cout << "Ceiling: " << ceil(num) << endl;
//     cout << "Floor: " << floor(num) << endl;
    
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float temp;
//     int weather;
    
//     cout << "Enter temperature (°C): ";
//     cin >> temp;
//     cout << "Weather (1=Sunny, 2=Rainy, 3=Cloudy): ";
//     cin >> weather;
    
//     switch(weather) {
//         case 1:
//             if(temp > 35) {
//                 cout << "Too hot, stay indoors!" << endl;
//             } else {
//                 cout << "Nice sunny day!" << endl;
//             }
//             break;
//         case 2:
//             cout << "Carry an umbrella!" << endl;
//             break;
//         case 3:
//             if(temp < 15) {
//                 cout << "Cold and cloudy, wear warm clothes." << endl;
//             } else {
//                 cout << "Cloudy weather!" << endl;
//             }
//             break;
//         default:
//             cout << "Invalid weather condition!" << endl;
//     }
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main() {
//     char ch;
//     cin >> ch;
    
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
//        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
//         cout << "Vowel";
//     } else {
//         cout << "Not vowel";
//     }
    
//     return 0;
// }



#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    
    cout << fact;
    return 0;
}