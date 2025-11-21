#include<iostream>
using namespace std;
int main(){
	int arr[5] ={1,2,3,4,5};
	int *p =arr;
	
	cout << *p <<endl;
	cout << *(p + 1)<<endl;
	cout << *(p + 2)<<endl;
	
	cout << p[0] <<endl;
	cout <<p[1]<<endl;
	
	return 0 ;
}
