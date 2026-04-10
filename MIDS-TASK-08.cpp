#include <iostream>
using namespace std;

int main(){
	float amount, tax;
	
	cout<<"Eter Your Amount ";
	cin>>amount;
	
	if(amount <= 400000){
		tax == 0;
	}
	else if(amount <= 800000){
		tax = (amount - 400000) * 0.05;
	}
	else if (amount <= 1200000){
		
		tax = (amount - 800000) * 0.10 + 20000;
	}
	else {
		tax = (amount - 1200000) * 0.20 + 60000;
	}
	cout<<"Total Tax = "<<tax;
	return 0;
}