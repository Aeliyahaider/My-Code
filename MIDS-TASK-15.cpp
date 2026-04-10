#include <iostream>
#include <string>
using namespace std;

void student(){
	string name, Fname;
	int id, grade;
	char section;
	
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"enter your father name: ";
	cin>>Fname;
	cout<<"Enter your ID: ";
	cin>>id;
	cout<<"enter your Grade: ";
	cin>>grade;
	cout<<"Enter your Section: ";	
	cin>>section;
	
	cout<<"\t \t ... Student Information ...."<<endl;
	cout<<" NAME: "<<name<<endl;
	cout<<" FATHER NAME: "<<Fname<<endl;
	cout<<" ID: "<<id<<endl;
	cout<<" GRADE: "<<grade<<endl;
	cout<<" SECTION: "<<section<<endl;
	
}

	
int main(){

	for(int i = 1; i <= 10; i++){
	cout<<"\nEnter Student "<< i <<" Informaion"<<endl;
	student();
	}
	
	return 0;
}