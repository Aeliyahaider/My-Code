#include <iostream>
using namespace std;

int main(){
	int op, totalbill = 0;
	char choice;
	cout<<"||......Cafeteria Billing System......||"<<endl;
	cout<<"Please Choose Your Option (1 - 3) "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"1: Burger: $10 "<<endl;
	cout<<"2: Pizza: $08 "<<endl;
	cout<<"3: Juice: $06 "<<endl;
	cout<<"0: Exit && Generate Bill"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	do{
	
		int price = 0, quantity = 0;
		cout<<"Please Enter Your Choice:";
		cin>>op;
		if(op == 0){
			cout<<"...Exiting..."<<endl;
			break;
		}
		switch(op){
			case 1: {
				price = 10;
				cout<<"Enter your Quantity ";
				cin>>quantity;
				cout<<"Burger: "<<price<<endl;
				cout<<"Quantity: "<< quantity << endl;
				break;
			}
			case 2: {
				price = 8;
				cout<<"Enter your Quantity ";
				cin>>quantity;
				cout<<"Pizza: "<<price<<endl;
				cout<<"Quantity: "<< quantity << endl;
				break;
			}
			case 3: {
				price = 6;
				cout<<"Enter your Quantity ";
				cin>>quantity;
				cout<<"Juice: "<<price<<endl;
				cout<<"Quantity: "<< quantity << endl;
				break;
			}
			default:{
			cout<<"Invalid Selection:";
			break;
		}
		}
		
		totalbill += price * quantity;
		
		cout<<"Enter Y To Continue and N to Generate Bill:";
		cin>>choice;
		
	}while(choice == 'y' || choice == 'Y');
	
	cout<<" "<<endl;
	cout<<"Before Discount applied: "<<totalbill<<endl;
	
	if(totalbill >  20){
		float discount = totalbill * 0.10;
		totalbill -= discount;
		cout<<" "<<endl;
		cout<<"Discount Applied:"<<discount<<endl;
	}
	cout<<" "<<endl;
	cout<<"TotalBill: "<<totalbill<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"***Thank for your Visiting***";
	return 0;
}