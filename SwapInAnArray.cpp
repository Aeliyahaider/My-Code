#include <iostream>
using namespace std;

int main(){
	int arr[] = {5,0,2,0,0,3,4,0,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int j = 0; j<n-1; j++){
	
	for(int i = 0; i<n-j-1; i++){
		if(arr[i]== 0 ){
			swap(arr[i], arr[i+1]);
		}
	}
}
	for(int i =0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}