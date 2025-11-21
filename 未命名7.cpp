#include<iostream>
using namespace std;

int main(){
	char str[] = "hello";
	char *ptr = str;
	
	while (*ptr != '\0'){
		cout << *ptr;
		ptr++;
		
	}
	cout <<endl;
	ptr = str;
	for(;*ptr != '\0';ptr++){
		cout << *ptr;
		
	}
	cout << endl;
}

