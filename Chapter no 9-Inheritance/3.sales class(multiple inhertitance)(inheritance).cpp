#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    float price;
};

class Sales {
protected:
    float sale[3];
public:
    void getSales() {
        cin >> sale[0] >> sale[1] >> sale[2];
    }
};

class Book : public Publication, public Sales {
public:
    void getdata() {
        cin >> title >> price;
        getSales();
    }
};

int main() {
    Book b;
    b.getdata();
}

