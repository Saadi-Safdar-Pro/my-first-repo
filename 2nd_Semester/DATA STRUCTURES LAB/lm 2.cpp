
#include <iostream>
using namespace std;

int main() {
	
	
     int marks;
     cout << "Enter a marks of student: ";
     cin >> marks;
     if(marks > 90){
         cout<<"Grade A+";
     }
     else if (marks > 80){
		 cout<<"Grade A";
	 }
	 else if (marks > 70){
		 cout<<"Grade B";
	 }
	 else if (marks > 60){
		 cout<<"Grade c";
	 }
	 else if (marks > 50){
		 cout<<"Grade D";
	 }
	 else{
		 cout<<"Grade F";
	 }
	
     int num;
     cout << "\n\nEnter a number: ";
     cin >> num;
     
     cout << "\nUsing for loop:\n";
     for (int i = 1; i <= 10; i++) {
         cout << i << endl;
     }
     
     cout << "Using while loop:\n";
     int i = 1;
     int sum = 0;
     while (i <= 10) {
         sum = num + i;
         i++;
     }
     cout << sum << endl;

     cout << "Using do-while loop:\n";
     i = 1;
     do {
         cout << num << " x " << i << " = " << num * i << endl;
         i++;
     } while (i <= 10);

     return 0;
 }
