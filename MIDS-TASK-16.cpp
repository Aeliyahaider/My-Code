#include <iostream>
#include <string>
using namespace std;

int main(){
	int marks, sum = 0;
	float per, avg;
	for(int i = 1; i <= 5; i++){
		cout<<"Please Enter Your Marks in  "<< i <<"  Subject: ";
		cin>>marks;
		sum = sum + marks;
		
		if(marks > 25 ){
			cout<<"Enter Marks less than 25:"<<endl;
			break;
		}
	}
	cout<<"Total Marks: "<<sum<<endl;
	per = ( sum /125.0) * 100;
	avg = sum / 5.0;
	
	cout<<"Your Percentage is : "<<per<<endl;
	cout<<"Average: "<<avg<<endl;
	
	if( per > 85 ){
		cout<<"GRADE A+ ";
	}
	else if( per < 85 && per >= 75){
		cout<<"GRADE B ";
	}
	else if(per < 75 && per >= 65 ){
		cout<<"GRADE C ";
	}
	else {
		cout<<"..POOR POOR POOR..";
	}
	return 0;
}