#include <iostream>
using namespace std;

int main(){
	int arr[4] = {1,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int product = 1;
	for(int i = 0; i < n; i++){
		product  *= arr[i];
	}
	cout<<"Product: "<<product;
	return 0;
}