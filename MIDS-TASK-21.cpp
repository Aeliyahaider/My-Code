#include <iostream>
using namespace std;

int main(){
	int arr[10] = {0,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int mx = INT_MIN;
	int mn = INT_MAX;
	for(int i = 0; i<n; i++){
		mx = max(mx, arr[i]);
		mn = min(mn, arr[i]); 
	}
	cout<<"Maximum Number is: "<<mx<<endl<<"Minumun Number is: "<<mn;
	return 0;
}