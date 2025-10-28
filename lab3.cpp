
// int main() 
// {
//     int arr[100];
//     for (int i = 0; i < 100; ++i) 
//     {
//         arr[i] = rand() % 100; 
//     }
//     for (int i = 0; i < 100; ++i) 
//     {
//         cout << "arr[" << i << "] = " << arr[i] << endl;
//     }
//     return 0;
// }


// int main()
// {
//     int n;
//     cout<<"Enter no of elements : ";
//     cin>>n;
// 	int arr[100];
// 	for(int i=0;i<n;i++)
//     {
// 		cin>>arr[i];
// 	}
// 	int max=arr[0];
// 	int min=arr[0];
// 	int sum=0;
//     for(int i=0;i<n;i++)
//     {
//         sum+=arr[i];
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//         if(arr[i]<min)
//         {
//             min=arr[i];
//         }
//     }
//     cout<<"Maximum element is : "<<max<<endl;
//     cout<<"Minimum element is : "<<min<<endl;
//     cout<<"Sum of elements is : "<<sum<<endl;
//     return 0;}



// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};
//     cout << "3rd element is: " << arr[2] << endl;
//     cout << "5th element is: " << arr[4] << endl;
//     return 0;
// }


// int main()
// {
//     int arr[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     cout << "Element at 2nd row, 3rd column is: " << arr[1][2] << endl;
//     cout << "Element at 3rd row, 1st column is: " << arr[2][0] << endl;
//     return 0;
// }




// int factorial(int n) {
//     int result = 1;
//     for (int i = 1; i <= n; i++) {
//         result = result * i;
//     }
//     return result;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
    
//         int result = factorial(n);
//         cout << "Factorial is " << result << endl;
// }





#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
    srand(rand());
    cout << "Rolling a die 10 times:" << endl;
    for (int i = 0; i < 10; ++i) 
    {
        int roll = (rand() % 6) + 1;
        cout << "Roll " << (i + 1) << ": " << roll << endl;
    }
    return 0;
}
    




