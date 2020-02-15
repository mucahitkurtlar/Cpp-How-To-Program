#include <iostream>

using namespace std;

class Book{
	public:
		string title;
		string author;
		unsigned int pages;
		Book(string title = "no title", string author = "no author", unsigned int pages = 0){
			Book::title = title;
			Book::author = author;
			Book::pages = pages;
		}
};

int main(){
	Book book("Faust", "Goethe", 330);
//	book.title = "Faust";
//	book.author = "Goethe";
//	book.pages = 320;
	cout << book.title << endl << book.author << endl << book.pages << endl;
	return 0;
}
