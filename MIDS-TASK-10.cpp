#include <iostream>
using namespace std;

int main(){
	int num , sum = 0;
	cout<<"Enter Values want to add (0 to exit)"<<endl;
	while(true) {
		cin>>num;
		
		if(num == 0){
			break;
		}
		sum = num + sum;
	}
	
	cout<<"Total Sum is ="<< sum;
	return 0;#include <iostream>
using namespace std;

int main()
{
    int num, i;
    char choice;

    do
    {
        cout << "Enter a number: ";
        cin >> num;


        int fact = 1;
        for (i = 1; i <= num; i++)
        {
            fact = fact * i;
        }

        cout << "Factorial = " << fact << endl;


        bool isPrime = true;

        if (num <= 1)
            isPrime = false;
        else
        {
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
            cout << "Number is Prime" << endl;
        else
            cout << "Number is Not Prime" << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
}