#include <iostream>

using namespace std;

class BaseClass {
    public:
        void display() {
            cout << "Display of BaseClass" << endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        void display() {
            cout << "Display of DerivedClass" << endl;
        }
};

int main() {
    BaseClass baseClass;
    DerivedClass derivedClass;
    baseClass.display();
    derivedClass.display();
    return 0;
}