﻿#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    int price;
    int pages;
public:
    Book(string title = "", int price = 0, int pages = 0) {
        this->title = title;
        this->price = price;
        this->pages = pages;
    }
    void show() {
        cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
    }
    string getTitle() {
        return title;
    }
    //friend 사용
    friend Book& operator+=(Book& book, int amount);
    friend Book& operator-=(Book& book, int amount);
};


Book& operator+=(Book& book, int amount) {             // += 연산자 외부 함수를 구현
    book.price += amount;
    return book;
}


Book& operator-=(Book& book, int amount) {             // -= 연산자 외부 함수를 구현
    book.price -= amount;
    return book;
}

int main() {
    Book a("청춘", 20000, 300), b("미래", 30000, 500);
    a += 500; // 책 a의 가격 500원 증가
    b -= 500; // 책 b의 가격 500원 감소
    a.show();
    b.show();
    return 0;
}
