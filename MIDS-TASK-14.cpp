#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout<<"Please Enter Two Values: ";
	cin>>num1>>num2;
	
	cout<<"Press + For Addition"<<endl;
	cout<<"Press - For SUBTRACTION"<<endl;
	cout<<"Press * For Multiplication"<<endl;
	cout<<"Press / For Divison"<<endl;
	cout<<"Press % For Reminder"<<endl;
	
	char op;
	cout<<"Enter an Operator please: ";
	cin>>op;
	
	switch(op){
		case '+':{
			cout<<"Result = "<< num1+num2;
			break;
		}
			
		case '-':
			cout<<"Result = "<< num1-num2;
			break;
		case '*':
			cout<<"Result = "<< num1*num2;
			break;
		case '/':
			cout<<"Result = "<< num1 / num2;
			break;
		case '%':
			cout<<"Result = "<< num1 % num2;
			break;
		default:{
			cout<<"invalid";
			break;
		}
		
	}
	
	return 0;
}