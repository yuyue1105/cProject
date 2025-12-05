#include<iostream>
#include<string>
using namespace std;
struct Student{
	string name;
	int age;
	double score;
	string major;
};
int main(){
	Student stu1;
	Student stu2 = {"李四",20,88.5,"数学"};
	
	stu1.name = "张三";
	stu1.age = 19;
	stu1.score = 92.5;
	stu1.major = "计算机";
	
	cout << stu1.name<<' '<<stu1.age<<" "<<stu1.score<<' '<<stu1.major<<endl<<stu2.name<<" "<<stu2.age<<' '<<stu2.score<<' '<<stu2.major<<endl;
	return 0;
}

