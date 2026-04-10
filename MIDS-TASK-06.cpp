#include <iostream>
using namespace std;

int main(){
	int pin = 1234, userpin;
	float balance, amount;
	
	cout<<"Please Enter Password";
	cin>>userpin;
	
	if(userpin == pin){
		
		cout<<"Enter Balance ";
		cin>>balance;
		cout<<"Enter Withdrawl amount";
		cin>>amount;
		
		if(amount > balance){
			cout <<"Insufficent amount";
		}
		else if(amount < 500 ){
			cout<<"Please enter Amount in multuple of 500";
		}
		else{
			balance = balance - amount;
			cout<<"You Remaning balance is = "<< balance;
		}
	
	}
		else{
			cout<<"Error";
		}
		
	return 0;
}