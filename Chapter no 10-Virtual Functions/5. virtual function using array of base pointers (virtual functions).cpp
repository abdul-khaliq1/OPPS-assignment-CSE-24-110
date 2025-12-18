#include <iostream>
using namespace std;

class person {
public:
    virtual void show() {
        cout << "person" << endl;
    }
};

class student : public person {
public:
    void show() {
        cout << "student" << endl;
    }
};

class teacher : public person {
public:
    void show() {
        cout << "teacher" << endl;
    }
};

int main() {
    person* p[2];
    student s;
    teacher t;

    p[0] = &s;
    p[1] = &t;

    for (int i = 0; i < 2; i++)
        p[i]->show();

    return 0;
}

