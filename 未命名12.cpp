#include<iostream>
using namespace std;
void p(const int &value){
	cout << value << endl;
	//value = 100;
}
int main(){
	int  a = 10;
	const int &ref1 = a;
	const int &ref2 = 20;
	
	p(a);
	p(30);
	return 0 ;
	
}

