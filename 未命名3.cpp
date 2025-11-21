#include<iostream>
using namespace std;
int main(){
	int r = 3 , c = 4;
	
	int **m = new int*[r];
	
	for (int i = 0;i < r; i++){
		m[i] = new int[c];
		
	}
	
	for(int i =0; i < r ; i++){
		for(int j = 0; j < c; j++){
			m[i][j] = i * c + j ;
		}
	}
	
	for(int i =0; i < r ; i++){
		for(int j = 0; j < c; j++){
			cout << m[i][j]<< endl;
		}
	}
	
	return 0 ;
}
