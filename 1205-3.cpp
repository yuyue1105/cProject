#include<iostream>
#include<string>
using namespace std;
struct Date{
	int year;
	int month;
	int day;
	
};
struct Address{
	string province;
	string city;
	string street;
	int zipCode;
};
struct Person{
	string name;
	Date birthday;
	Address homeAddress;
	string phone;
};
void printPersonInfo(Person p){
	cout << "姓名："<<p.name<<endl;
	cout << "生日："<<p.birthday.year<<"年"<<p.birthday.month<<"月"<<p.birthday.day<<"日"<<endl;
	cout <<"地址："<<p.homeAddress.province<<p.homeAddress.city<<p.homeAddress.street<<"（邮编："<<p.homeAddress.zipCode<<"）"<< endl;
	cout <<"电话："<<p.phone<<endl;
	cout <<"=================================================================================="<<endl; 
	
}
int main(){
	Person person1 = {
		"刘洋",
		{1990,5,15},
		{"江苏省","南京市","中山路123号",210000},
		"13800138000"
	};
	Person person2;
	person2.name = "陈静";
	person2.birthday = {1985,8,22};
	person2.homeAddress.province = "浙江省";
	person2.homeAddress.city = "杭州市";
	person2.homeAddress.street = "西湖区文三路456号";
	person2.homeAddress.zipCode =310000;
	person2.phone = "13900139000";
	 
	printPersonInfo(person1);
	printPersonInfo(person2);
	
	return 0;
	 
}

