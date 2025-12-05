#include<iostream>
using namespace std;

int g = 100;

int& get(){
	return g;
}

int& ge(int arr[] , int index){
	return arr[index];
}
int main(){
	get() = 200;
	cout <<get <<endl;
	
	int arr[5] = {1,2,3,4,5};
	ge(arr , 2)=30;
	cout <<arr[2]<<endl;
	return 0;
}

