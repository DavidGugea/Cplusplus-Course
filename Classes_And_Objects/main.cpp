#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string autor;
        int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry Potter";
    book1.autor = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.autor = "Tolkein";
    book2.pages = 700;
    book2.title = "Hunger Games";

    cout << book2.title << endl;

    return 0;
}
