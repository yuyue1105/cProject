#include<iostream>
using namespace std;

int main(){
	int a = 1;
	int &ref = a;
	
	cout << a << endl;
	cout << ref << endl;
	
	ref = 20;
	cout << a << endl;
	return 0;
}

