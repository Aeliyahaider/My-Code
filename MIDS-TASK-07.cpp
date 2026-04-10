#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	char op;
	
	cout<<"Enter Any Two Number";
	cin>>op;
	
	cout<<"Eter operator (+, -, /, *)";
	cin>>op;
	switch(op){
		case '+':
			cout<<"Result = "<<num1+num2;
			break;
		case '-':
			cout<<"Result = "<<num1-num2;
			break;
		case '*':
			cout<<"Result = "<<num1*num2;
			break;
		case '/': if( num2 ==0){
			cout<<"Number is divisible by 0 Undefine ";
			break;	
		        }
		    else {
		    	cout<<"Result = "<<num1/num2;
			}
			break;
		default:
		cout <<"Invalid";
		
		
	}
	
	return 0;
}