#include<iostream>
using namespace std;

int main(){
	int n1 = 10;
	int n2 = 20;
	const int *p1 = &n1;
	p1 = &n2;
	//*p1 = 30;
	int *const p2 = &n1;
	*p2 = 30;
	//p2 = &n2;
	const int *const p3 = &n1;
}

