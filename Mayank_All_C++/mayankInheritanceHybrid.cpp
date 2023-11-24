#include <iostream>

using namespace std;

class Van {
    public:
    Van() {
        cout << "Van constructor called" << endl;
    }
};

class Fare {
    public:
    Fare() {
        cout << "Fare constructor called" << endl;
    }
};

class Car : public Van, public Fare {
    public:
    Car() {
        cout << "Car constructor called" << endl;
    }
};

class Bus : public Van, public Fare {
    public:
    Bus() {
        cout << "Bus constructor called" << endl;
    }
};

int main() {
    Car c;
    Bus b;
    return 0;
}