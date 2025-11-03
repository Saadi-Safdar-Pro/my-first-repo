//  int main()
// {
//     int arr[50], size, pos;
    
//     cout<<"Enter array size: ";
//     cin>>size;

//     cout<<"Enter array elements: ";
//     for(int i=0; i<size; i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Enter position where you want to insert: ";
//     cin>>pos;

//     for( int i=size; i>pos; i--)
//     {
//         arr[i]=arr[i-1];
//     }

//     size++;
//     arr[pos]=25;

//     cout<<"New array elements are: ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }



// int main()
// {
//     int arr[100], s, k;
//     for(int i=0; i<100; i++)
//     {
//         arr[i]=rand()%100;
//         cout<<"array["<<i<<"]"<<arr[i]<<endl;
//     }
//     cout<<"Enter a value to search in array: ";
//     cin>>s;
    
//     for(int j=0; j<100; j++)
//     {
//         if(s == arr[j])
//         {
//             cout<<"\nNumber found at array["<<j<<"]";
//             k=1;
//         }
//     }
//     if(k == 0)
//     {
//         cout<<"Number not found"<<endl;
//     }
//     return 0;
// }





// int main()
// {
//     int arr[100], hv, lv;
//     cout<<"Enter five values: ";
//     for(int i=0; i<5; i++)
//     {
//         cin>>arr[i];
//     }
//     hv = arr[0];
//     lv = arr[0];
//     for(int j=0; j<5; j++)
//     {
//         if(arr[j]>hv)
//         {
//             hv = arr[j];
//         }
//         if(arr[j]<lv)
//         {
//             lv = arr[j];
//         }
//     }
//     cout<<"Highest value is: "<<hv;
//     cout<<"\nLowest value is: "<<lv;
//     return 0;
// }




// int main()
// {
//     int arr[50], size, pos;
//     cout<<"Enter array size: ";
//     cin>>size;
//     cout<<"Enter array elements: ";
//     for(int i=0; i<size; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Enter position of element to delete : ";
//     cin>>pos;
//     for(int i=pos; i<size-1; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     size--;
//     cout<<"New array elements are: ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }



// Lab Tasks
// Task 1: Student Marks Management System
// Scenario:
// You are developing a program for a teacher who wants to store and manage student marks in an array. The
// teacher needs to:
// • Insert new student marks,
// • Search for a particular student’s mark,
// • Delete a specific mark, and
// • Calculate how many marks are currently stored.
// Instructions:
// 1. Declare an integer array to store student marks.

// 2. Take the number of students from the user.
// 3. Perform insertion to add marks into the array.
// 4. Implement linear search to find whether a specific mark exists.
// 5. Perform deletion by removing a selected mark and shifting the remaining marks.
// 6. Use sizeof() to find:
// o The total memory used by the array.
// o The number of elements stored.
// 7. Display the final list of marks.





// #include <iostream>
// using namespace std;
// int main()
// {
//     int marks[100], size, choice, mark, pos;
//     cout<<"Enter number of students: ";
//     cin>>size;

//     cout<<"Enter student marks: ";
//     for(int i=0; i<size; i++)
//     {
//         cin>>marks[i];
//     }

//     cout<<"Enter a mark to search: ";
//     cin>>mark;
//     bool found = false;
//     for(int i=0; i<size; i++)
//     {
//         if(marks[i] == mark)
//         {
//             cout<<"Mark found at position: "<<i<<endl;
//             found = true;
//             break;
//         }
//     }
//     if(!found)
//     {
//         cout<<"Mark not found."<<endl;
//     }

//     cout<<"Enter position of mark to delete: ";
//     cin>>pos;
//     for(int i=pos; i<size-1; i++)
//     {
//         marks[i] = marks[i+1];
//     }
//     size--;

//     cout<<"Total memory used by the array: "<<sizeof(marks)<<" bytes"<<endl;
//     cout<<"Number of elements currently stored: "<<size<<endl;

//     cout<<"Final list of marks: ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<marks[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }







// Task 2: Inventory Management System
// Scenario:
// You are assigned to help a shopkeeper manage product quantities.
// The system should:
// • Keep an array of product quantities,
// • Allow insertion of a new product quantity,
// • Search for a specific product quantity,
// • Delete an item that is out of stock,
// • Display total inventory size using sizeof().
// Instructions:
// 1. Declare an integer array for product quantities.
// 2. Insert product quantities entered by the user.
// 3. Implement linear search to find a specific quantity (e.g., check if a product quantity of 50 exists).
// 4. Delete a quantity if it becomes 0 or less.
// 5. Use sizeof() to determine:
// o Total memory allocated for all products.
// o Number of products currently stored.
// 6. Display the updated inventory after all operation.


// #include <iostream>
// using namespace std;
// int main()
// {
//     int quantities[100], size, quantity, pos;
//     cout<<"Enter number of products: ";
//     cin>>size;

//     cout<<"Enter product quantities: ";
//     for(int i=0; i<size; i++)
//     {
//         cin>>quantities[i];
//     }

//     cout<<"Enter a quantity to search: ";
//     cin>>quantity;
//     bool found = false;
//     for(int i=0; i<size; i++)
//     {
//         if(quantities[i] == quantity)
//         {
//             cout<<"Quantity found at position: "<<i<<endl;
//             found = true;
//             break;
//         }
//     }
//     if(!found)
//     {
//         cout<<"Quantity not found."<<endl;
//     }

//     cout<<"Enter position of quantity to delete (if out of stock): ";
//     cin>>pos;
//     if(quantities[pos] <= 0)
//     {
//         for(int i=pos; i<size-1; i++)
//         {
//             quantities[i] = quantities[i+1];
//         }
//         size--;
//         cout<<"Quantity deleted."<<endl;
//     }
//     else
//     {
//         cout<<"Quantity is not out of stock."<<endl;
//     }

//     cout<<"Total memory allocated for all products: "<<sizeof(quantities)<<" bytes"<<endl;
//     cout<<"Number of products currently stored: "<<size<<endl;

//     cout<<"Updated inventory quantities: ";
//     for(int i=0; i<size; i++)
//     {
//         cout<<quantities[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
