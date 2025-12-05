#include<iostream>
using namespace std;

void s(int a,int b ){
	int t = a;
	a = b;
	b = t;
}
void r(int &a , int &b){
	int t = a;
	a = b;
	b = t;
}
int main(){
	int x = 5,y = 10;
	cout << x << y << endl;
	
	 s(x , y);
	 cout << x << y<< endl;
	 
	 r(x , y);
	 cout << x  << y <<endl;
	 return 0;
}

