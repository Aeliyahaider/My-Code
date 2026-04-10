#include <iostream>
using namespace std;

int main(){
	
	int a, b , c;
	cout<<"Enter three numbers = ";
	cin>>a >>b >>c;
	
	if(a>b){
		
		if(a>c){
			cout<<"A is grater ="<<a<<endl;
		}
		else {
			cout<<"C is Grater ="<<c<<endl;
		}
	}
	
	else{
		 
		 if(b>c){
		 	cout<<"B is greater ="<<b<<endl;
		 }
		 else {
		 	cout<<"C is greater ="<<c<<endl;
		 }
	}
	
	return  0;
}