#include <iostream>

using namespace std;

class Base {
    public:
        virtual void print() {
            cout << "Base class print function" << endl;
        }
        void display() {
            cout << "Base class display function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived class print function" << endl;
        }
        void display() {
            cout << "Derived class display function" << endl;
        }
};

int main() {
    Base *basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->print();
    basePtr->display();
    return 0;
}