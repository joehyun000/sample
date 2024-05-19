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

    // friend 함수 선언
    friend bool operator==(const Book& b, int p);
    friend bool operator==(const Book& b, string t);
    friend bool operator==(const Book& b1, const Book& b2);
};

// == 연산자 정의
bool operator==(const Book& b, int p) {
    return b.price == p;
}

bool operator==(const Book& b, string t) {
    return b.title == t;
}

bool operator==(const Book& b1, const Book& b2) {
    return b1.title == b2.title && b1.price == b2.price && b1.pages == b2.pages;
}

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

