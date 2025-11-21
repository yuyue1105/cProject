#include<iostream>
using namespace std;
int main(){
	int num = 1;
	int *p = &num;
	
	cout << num << endl;
	cout << &num << endl;
	cout << p << endl;
	cout << *p << endl;
	
	*p = 100;
	cout << num << endl;
	return 0;
	
}
