#include<iostream>
#include<string>
using namespace std;
struct Book{
	string title;
	string author;
	double price;
	int pages;
};
void printBook(Book book){
	cout << "书名："<<book.title<<endl;
	cout << "作者："<<book.author<<endl;
	cout <<"价格：￥"<<book.price << endl;
	cout <<"页数："<<book.pages<<"页"<<endl;
	cout <<"-------------------"<<endl; 
}
void updateBookPrice(Book &book,double newPrice){
	book.price = newPrice;
	
}
Book createBook(string title,string author,double price,int pages){
	Book newBook;
	newBook.title = title;
	newBook.author = price;
	newBook.pages = pages;
	return newBook;
}
int main(){
	Book book1 = {"C++ Primer","Stanley Lippman",89.9,800};
	Book book2 = createBook("深入理解计算机系统","Randal Bryant",99.0,750);
	
	printBook(book1);
	printBook(book2);
	
	updateBookPrice(book1,79.9);
	cout << "降价后的书籍信息："<<endl;
	printBook(book1);
	
	return 0;
	 
}

