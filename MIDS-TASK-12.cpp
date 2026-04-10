#include <iostream>
using namespace std;

int main(){
	char choice;

	for(int i = 1; i <=7; i++){
		cout<<"Enter " << i <<"  for  day "<< i <<endl;	   
	}
	
	do{
	int op;
	cout<<"Chose ";
	cin>>op;
	
	switch(op){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tuesday";
			break;
		case 3:
			cout<<"Wednesday";
			break;
		case 4:
			cout<<"Thursday";
			break;	
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Thursday";
			break;
		case 7:
			cout<<"Thursday";
			break;	
	}
	 cout<<endl<<"Enter y/n for further continue: ";
	 cin>>choice;
		} while(choice == 'y'|| choice == 'Y');

}