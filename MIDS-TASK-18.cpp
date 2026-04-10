#include <iostream>
using namespace std;

int main(){
	int year;
	
	cout<<"Please Enter Year: ";
	cin>>year;
	
	if(year % 4 == 0 && year != 100 || year % 400 == 0){
		cout<<"Leap Year";
	}
	else{
		cout<<"Not Leap year";
	}
	return 0;
}