#include<iostream>
#include<string>
using namespace std;
struct Employee{
	int id;
	string name;
	string department;
	double salary;
	
};
void printEmployees(Employee employees[],int size){
	cout << "员工列表" <<endl;
	cout <<"============================"<<endl;
	for(int i = 0;i<size;i++){
		cout << "ID："<<employees[i].id<<endl;
		cout << "姓名："<<employees[i].name<<endl;
		cout <<"部门："<<employees[i].department<< endl;
		cout <<"薪资：￥"<<employees[i].salary<<"元"<<endl;
		cout <<"-------------------"<<endl; 
	} 
	
}

double calculateAverageSalary(Employee employees[],int size){
	double total = 0;
	for(int i = 0;i < size;i++){
		total += employees[i].salary; 
	}
	return total / size;
}
int main(){
	const int SIZE = 3;
	Employee company[SIZE] = {
		{1001,"王明","技术部",15000},
		{1002,"李华","市场部",12000},
		{1003,"张伟","人事部",10000}
	};
	printEmployees(company,SIZE); 
	double avgSalary = calculateAverageSalary(company,SIZE);
	cout << "平均薪资：￥"<<avgSalary<<endl;
	
	return 0;
	 
}

