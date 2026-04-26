#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> r(5);
	for(int i=0; i<r.size(); i++){
		cout<<"Enter Array: ";
		cin>>r[i];
	}
	for(int i =0; i<r.size(); i++){
		cout<<r[i];
	}
	cout<<endl;
	
	reverse(r.begin(), r.end());
	for(int i=0; i<r.size(); i++){
		cout<<r[i];
	}
	return 0;
}