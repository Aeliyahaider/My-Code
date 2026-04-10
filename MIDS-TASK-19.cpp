#include <iostream>
using namespace std;

int main(){
	int choice, totalbill = 0;
	char choic;
	cout<<"1: Coffee $2"<<endl;
	cout<<"2: Chips $1"<<endl;
	cout<<"3: Water $1"<<endl;
	cout<<"0: Exit"<<endl;
	
	do{
		cout<<"Enter Your Choice:";
		cin>>choice;
		int price = 0;
		
		switch(choice){
			
			case 1:{
				price = 2;
				cout<<"Coffee "<<price<< endl;
				break;
			}
			case 2:{
				price = 1;
				cout<<"Chips "<<price<<endl;
				break;
			}
			case 3:{
				price = 1;
				cout<<"Water "<<price<<endl;
				break;
			}
			case 0:{
				break;
			}
			
			default:{
				cout<<"Invalid statement"<<endl;
				break;
			}
		}
		
		totalbill += price;
		
		cout<<"Enter y/n for Continue: ";
		cin>>choic;
		
	}while(choic == 'y' || choic == 'Y');
	
	cout<<"TotalBill: "<<totalbill;
	return 0;
}