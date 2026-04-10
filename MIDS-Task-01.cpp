#include <iostream>
using namespace std;

int main(){
	int num1, num2, num3;
	cout<<"Enter First subject Marks (Out of 100)";
	cin>>num1;
	cout<<"Enter Second subject Marks (Out of 100)";
	cin>>num2;
	cout<<"Eter third subject Marks (Out of 100)";
	cin>>num3;
	
	float avg = (num1+num2+num3)/3;
	cout<<"Average = "<< avg << endl;
	if (avg >= 90){
		cout << "A+";
	}
	else if (avg >=80 && avg <=89){
			cout<<"A";
		}
	else if (avg >=70 && avg <=79){
			cout<<"B";
		}
	else if (avg >=60 && avg <=69){
			cout<<"C";
		}

	else {
		cout<<"F";
	}
	
	
	return 0;
}