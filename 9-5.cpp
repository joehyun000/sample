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


    bool operator!() const {           // ! 연산자함수 구현
        return price == 0;
    }
};

int main() {
    Book book("벼룩시장", 0, 50); // 가격은 0

    if (!book) {
        cout << "공짜다" << endl;
    }

    return 0;
}
