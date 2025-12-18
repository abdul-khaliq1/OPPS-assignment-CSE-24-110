#include <iostream>
using namespace std;

class TollBooth {
    unsigned int cars;
    double cash;

public:
    TollBooth() { cars = 0; cash = 0; }

    void payingCar() { cars++; cash += 0.5; }
    void nopayCar()  { cars++; }

    void display() const {
        cout << cars << " cars, $" << cash << endl;
    }
};

int main() {
    TollBooth t;
    t.payingCar();
    t.nopayCar();
    t.display();
}

