#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout<<"Please Enter First Number =";
	cin>>num1;
	cout<<"Please Enter Second Number =";
	cin>>num2;
	
	cout<<"Enter + for Addition"<<endl;
	cout<<"Enter - for Addition"<<endl;
	cout<<"Enter * for Addition"<<endl;
	cout<<"Enter / for Addition"<<endl;
	cout<<"Enter % for Addition"<<endl;
	
	char op;
	cout<<"Enter a Value :";
	cin>>op;
	
	switch(op){
		case '+':
			cout<<"Result = "<< num1 + num2;
			break;
		case '-':
			cout<<"Result = "<< num1 - num2;
			break;
		case '/':
			cout<<"Result = "<< num1 /num2;
			break;
		case '*':
			cout<<"Result = "<< num1 * num2;
			break;
		case '%':
			cout<<"Result = "<< num1 % num2;
			break;
		default:
		cout<<"Invalid value";
	}
	
	return 0;
}