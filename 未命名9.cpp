#include<iostream>
using namespace std;

int main(){
	int a = 10;
	int &ref = a;
	ref = 20;
	
	cout << a << endl;
	int b  = 10;
	int *p = &b;
	*p = 20;
	
	cout << b << endl;
	return 0;
}

