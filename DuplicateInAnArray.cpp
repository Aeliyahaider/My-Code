#include <iostream>
using namespace std;

int main(){
	int i;
	float arr[6] = {1,2,3,3,4,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<n; i++){
		for(int j= i + 1 ; j<n; j++ ){
			if(arr[i]==arr[j]){
				cout<<"Duplicate: "<< arr[i];
			}
		}
	}
	return 0;
}