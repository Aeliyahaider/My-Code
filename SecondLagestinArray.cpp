#include <iostream>
using namespace std;

int main(){
	int arr[10] = {1,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int mx = INT_MIN;
	int smx = INT_MIN;
	
	for(int i = 0; i<n; i++){
		mx = max(mx,arr[i]);
	}
	
	for(int i = 0; i<n; i++){
		if(smx < arr[i] && arr[i]!= mx)
		smx = arr[i];
	}
	cout<<"Largest: "<<mx <<endl<< "Second largest: "<<smx;
	
	return 0;
}