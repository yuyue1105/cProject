#include<iostream>
using namespace std;
void s1(int a,int b){
	int t = a;
	a = b;
	b = t;
	
}
void s2(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int main(){
	int x = 5, y = 10;
	
	cout << x<<y<<endl;
	
	s1(x,y);
	cout << x << y << endl;
	
	s2(&x,&y);
	cout << x << y << endl;
}

