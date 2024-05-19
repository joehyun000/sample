#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
    int pages;
public:
    Book(string t, int p, int pg) {
        title = t;
        price = p;
        pages = pg;
    }

    // price 비교
    bool operator==(int p) {
        return this->price == p;
    }

    // 책 title 비교
    bool operator==(string t) {
        return this->title == t;
    }

    // title, price, pages 모두 비교
    bool operator==(const Book& b) {
        return this->title == b.title && this->price == b.price && this->pages == b.pages;
    }
};

int main() {
    Book a("명품 C++", 30000, 500);
    Book b("고품 C++", 30000, 500);

    // price 비교
    if (a == 30000) cout << "정가 30000원" << endl;
    // 책 title 비교
    if (a == "명품 C++") cout << "명품 C++ 입니다." << endl;
    // title, price, pages 모두 비교
    if (a == b) cout << "두 책이 같은 책입니다." << endl;

    return 0;
}

