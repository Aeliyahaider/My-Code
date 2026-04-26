#include <iostream>
using namespace std;

int main(){
	int arr[3] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int mx = INT_MIN;
	for(int i = 0; i<n; i++){
		mx = max(mx,arr[i]);
	}
	cout<<"Maximum Number In an Array is : "<<mx;
	return 0;
}