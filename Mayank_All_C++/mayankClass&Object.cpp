#include <iostream>

using namespace std;

class mayankClass {
    public:
    void func() {
        cout << "I am a function with no arguments" << endl;
    }
};

int main() {
    mayankClass obj;
    obj.func();
    return 0;
}