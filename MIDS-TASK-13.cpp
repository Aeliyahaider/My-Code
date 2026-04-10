#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	char choice;
	int rno , grade;
	
	cout<<" \t \t \t WELCOME TO AL-MURTAZA PUBLIC SCHOOL & COLLAGE"<<endl;
	cout<<"\t \t \t \t FOUNDED BY SHAIKH AELIYA HAIDER"<<endl;
	
	cout<<"1 To Add Students"<<endl;
	cout<<"2 To View Student"<<endl;
	cout<<"3 To Search Student"<<endl;
	cout<<"4 To Delete Student"<<endl;
	cout<<"5 To Exit"<<endl;
	
	do{
	int op;
	cout<<"Please Enter Your Choice (1 to 5): ";
	cin>>op;
	
	switch(op){
		case 1:
			cout<<"Enter Student Name: ";
			cin>>name;
			cout<<"Enter Student RNO: ";
			cin>>rno;
			cout<<"Enter Student Grade: ";
			cin>>grade;
			break;
		case 2: 
		cout<<"Name : "<<name<<endl;
		cout<<"RNO : "<<rno<<endl;
		cout<<"Grade : "<<grade<<endl;
		break;
		
		default:
	    cout<<"Invalid";
	}
	cout<<"Do you want to continue y/n :";
	cin>>choice;
		
    }while( choice == 'y'|| choice == 'Y');
	return 0;
}