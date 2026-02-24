#include <iostream>
using namespace std;

int main() {
	
int stock[10] = {5, 15, 22, 35, 40, 55, 65, 70, 85, 95};
int size = 10;
int num;
int pos;


    cout << "Enter an element to search: ";
    cin >> num;
    bool found = false;

    for (int i = 0; i < size; ++i)
        if (stock[i] == num)
            {
                cout<<"Element found at position: "<<i<<endl;
                found = true;
                break;
            }

    if(!found) 
        {
           cout<<"Element not found."<<endl;
       }
     
     
     
	 
cout << "Enter the element to insert : ";
 cin >> num;

 for( int i=size; i>pos-1; i--)
  {
      stock[i]=stock[i+1];
 }

 size++;
 
   cout<<"Enter position of element to delete: ";
    cin>>pos;

     for(int i=pos; i<size-1; i++)
        if(i!=pos)
         {  
             stock[i] = stock[i + 1];   
         }
     
      size--;
     
     
     

int hv, lv;
hv = stock[0];
lv = stock[0];


    for (int j=0; j<size-1; j++)
        if(stock[j]>hv)
            {
                hv = stock[j]; 
         }
        
     cout<<"Highest value is: "<<hv<<endl;
cout<<"\nLowest value is: "<<lv<<endl;


cout << " The size of array is: "<< sizeof(stock) ;

return 0;
}

