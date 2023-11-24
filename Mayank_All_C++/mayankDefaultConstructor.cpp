#include <iostream>

using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Constructor called" << endl;
        }
};

int main() {
    MyClass myObj;
    return 0;
}