#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	int D;
	cout<<"Enter Three Values: ";
	cin>>num1>>num2>> num3;
	
	D = num2*num2 - 4*num1* num3;
	if(D > 0){
		cout<<"Roots Are real and Imaginary";
	}
	else if (D == 0){
		cout<<"Roots are Real and equal";
	}
	else {
		cout<<"Roots are imaginary";
	}
	
	
	return 0;
}