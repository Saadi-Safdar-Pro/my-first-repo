#include <iostream>
using namespace std;

struct Student {
    char name[20];
    int roll;
    double marks[3]; 

};

int main() {

    int studentMarks[2][2] = {{80, 85, 78}, {88, 82, 90}, {75, 89, 84}};
    
                               

    struct *ptrStudent;

    cout << "Original Marks:" << endl;
    for (int i = 0; i < 3; ++i) {
        ptrStudent[i] = &studentMarks[2][i]; 
        cout << "Roll: " << studentMarks[i][1] << ", Name: " << studentMarks[i][0]
             << endl;
    }

    sort(studentMarks, studentMarks + 3); 

    cout << "\nSorted Marks:" << endl;

    for (int i = 0; i < 3; ++i) {
        ptrStudent[i] = &studentMarks[2][i]; 
        cout << "Roll: " << studentMarks[i][1] << ", Name: " << studentMarks[i][0]
             << endl;
    }

    return 0;
}
