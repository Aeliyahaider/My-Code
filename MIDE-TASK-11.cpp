#include <iostream>
using namespace std;

int main(){
	int num;
	char choice ;
	
	do{
		cout<< "Enter a Number: ";
		cin>>num;
		int fact = 1;
		for(int i = 1; i <= num; i++){
			fact = fact *i;
		
		}
		cout<<"Factorial = "<<fact <<endl;
		
		bool isprime = true;
		if(num <= 1){
			isprime = false;
		}
		else {
				for (int i = 2; i < num; i++){
					
			if (num % i == 0){
				isprime = false;
				break;
			}
	    }
		
    	}
    	
    	if(isprime){
    		cout<<"Prime number "<<endl;
		}
		else{
			cout<<"not prime"<<endl;
		}
		
		cout<<"Do you want to continue (y/n)";
		cin>>choice;
	}while(choice == 'y' || choice == 'Y');
	
	return 0;
}