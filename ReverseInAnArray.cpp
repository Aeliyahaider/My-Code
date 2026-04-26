#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> vet(5);
	for(int i =0; i<vet.size(); i++){
		cout<<"Enter Values:";
		cin>>vet[i];
	}
	for(int i =0; i<vet.size(); i++){
		cout<<" "<<vet[i];
	}
	
	cout<<endl;
	
	sort(vet.begin(), vet.end());
		for(int i =0; i<vet.size(); i++){
		cout<<" "<<vet[i];
	}
	cout<<endl;
	return 0;
}