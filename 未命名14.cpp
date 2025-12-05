#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>vec = {1,2,3,4,5};
	
	for (auto value :vec){
		value*= 2;
	}
	
	for (auto value : vec){
		cout << value <<" ";
	}
	cout<<endl;
	
	for (auto &value :vec){
		value *= 2;
	}
	
	for (auto value :vec){
		cout <<value << " ";
	}
	cout<<endl;
	return 0;
}

