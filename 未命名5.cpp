#include<iostream>
using namespace std;
int* c(int size){
	int *arr = new int[size];
	for(int i = 0 ; i < size;i++){
		arr[i] = i * i;
	}
	return arr;
}

int main(){
	int *my = c(5);
	for (int i = 0;i < 5;i++){
		cout << my[i] << ' ';
	}
	cout <<endl;
}

