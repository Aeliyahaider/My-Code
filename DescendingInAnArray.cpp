#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> arr= {1,4,3,2,5,9};
	int i;
	int n= arr.size();
	for( i =0; i<n; i++){
		cout<<arr[i];
	}
	cout<<endl;
	
	sort(arr.begin(), arr.end(), greater<int>());
	
	for(i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}