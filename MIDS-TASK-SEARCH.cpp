#include <iostream>
using namespace std;

int main(){
	int arr[10] = {1,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x;
	cout<<"Enter the Target: ";
	cin>>x;
	for(int i = 0; i < n; i++){
		if(arr[i]==x){
			cout<<"Element Present: "<<x;
		}
	}
	cout<<"Not present: ";
	
	return 0;
}