#include<iostream>
#include<string>
using namespace std;

class Student{
	private:
		string name;
		int age;
	public:
		Student(const string &n,int a) : name(n),age(a){}
		
		const string& getName() const { return name;}
		const int& getAge() const {return age;}
		
		void setName(const string &newName){name = newName;}
};
int main(){
	Student student("张三",20);
	
	const string &nameRef = student.getName();
	cout<<nameRef<<endl;
	
	string newName ="李四";
	student.setName(newName);
	cout << student.getName()<<endl;
	return 0; 
}

