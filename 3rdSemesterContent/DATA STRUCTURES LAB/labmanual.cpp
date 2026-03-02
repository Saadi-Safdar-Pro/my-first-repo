#include <iostream>
using namespace std;
int main()
{
	    int quantitiy;
		float price;
		float totalBill;
		
		cout<<"Enter quantity: ";
		cin>>quantitiy;
		cout<<"\nEnter price: ";
		cin>>price;
		
		totalBill = quantitiy * price;
		
		cout<< "The total bill is: "<<totalBill;
}

